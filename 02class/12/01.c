#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

struct Link
{
	int data;
	struct Link* next;
};

struct Stack
{
	struct Link* head;
	int size;
};

void StackInit(struct Stack* stack)
{
	stack->head = NULL;
	stack->size = 0;
}

void StackPush(struct Stack* stack,const int data)
{
	struct Link* node;
	node = (struct Link*)malloc(sizeof(struct Link));
	assert(NULL != node);
	node->data = data;
	node->next = stack->head;
	stack->head = node;
	++stack->size;
}

int StackEmpty(struct Stack* stack)
{
	return stack->size == 0;
}


int StackPop(struct Stack* stack,int* data)
{
	if(StackEmpty(stack))
	{
		return 0;
	}

	struct Link* tmp = stack->head;
	*data = stack->head->data;
	stack->head = stack->head->next;
	free(tmp);
	--stack->size;

	return 1;
}


void StackCleanup(struct Stack* stack)
{
	struct Link* tmp;
	while(stack->head)
	{
		tmp = stack->head;
		stack->head = stack->head;
		free(tmp);
	}

	stack->size = 0;
}


int main()
{
	struct  Stack stack;
	StackInit(&stack);
	for(int i = 0; i < 5;++i)
	{
		StackPush(&stack,i);
	}

	int tmp = 0;
	while(!StackEmpty(&stack))
	{
		StackPop(&stack,&tmp);
		printf("%d\n", tmp);
	}
	printf("\n");
	StackCleanup(&stack);

	return 0;
}









