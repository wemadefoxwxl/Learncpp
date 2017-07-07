#include <iostream>
#include <vector>
#include <queue>

using std::cout;
using std::endl;

int main()
{
	int a[] = {33,62,52,618,43,74,48,23};

	std::make_heap(std::begin(a),std::end(a),std::less<int>());

	copy(std::begin(a),std::end(a),std::ostream_iterator<int>(cout," "));
	cout << endl;

	sort_heap(std::begin(a),std::end(a),std::less<int>());
	copy(std::begin(a),std::end(a),std::ostream_iterator<int>(cout," "));
	cout << endl;

	return 0;
}