#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	static OI* m_pInstance;

public:
	static OI* GetInstance();
	OI();

	Joystick* stickL;
	Joystick* stickR;
	Joystick* gamepad;
};

#endif
