#include "Subsystems/Chassis.h"
#include "Commands/DefaultDrive.h"

Chassis* Chassis::m_pInstance = NULL;

Chassis* Chassis::GetInstance()
{
	if(!m_pInstance) m_pInstance = new Chassis;
	return m_pInstance;
}

Chassis::Chassis() : Subsystem("Chassis")
{
	m_drive = new RobotDrive(PORT_LEFTMOTOR, PORT_RIGHTMOTOR);
	m_drive->SetSafetyEnabled(false);
}

void Chassis::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new DefaultDrive());
}

//Arcade Drives with the values of move as the forward value, and turn as the turning value
void Chassis::Drive(double move, double turn, bool quad)
{
	m_drive->ArcadeDrive(move, turn, quad);
}
