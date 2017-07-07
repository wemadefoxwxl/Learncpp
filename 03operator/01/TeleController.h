#ifndef _TELE_CONTROLLER_H
#define _TELE_CONTROLLER_H

class Television;

class TeleController
{
public:
	void VolumeUp(Television& tv);

	void VolumeDown(Television& tv);

	void ChanelUp(Television& tv);

	void ChanelDown(Television& tv);
};
#endif