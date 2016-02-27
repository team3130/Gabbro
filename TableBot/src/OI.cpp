#include "OI.h"

OI* OI::GetInstance()
{
	if(!m_pInstance) m_pInstance = new OI;
	return m_pInstance;
}

OI::OI()
{
	stickL = new Joystick(0);
	stickR = new Joystick(1);
}
