// AutonomousCommand

#include "commands/MovingSolenoidBasic.h"


MovingSolenoidBasic::MovingSolenoidBasic(){

    // Use AddRequirements() here to declare subsystem dependencies
    // eg. AddRequirements(m_Subsystem);
    SetName("MovingSolenoidBasic");
}


// Called just before this Command runs the first time
void MovingSolenoidBasic::Initialize() {
}


// Called repeatedly when this Command is scheduled to run
void MovingSolenoidBasic::Execute() {
    //m_solenoid.Set(frc::DoubleSolenoid::Value::kForward);
}


// Make this return true when this Command no longer needs to run execute()
bool MovingSolenoidBasic::IsFinished() {
    return false;
}


void MovingSolenoidBasic::End(bool interrupted){
    //m_solenoid.Set(frc::DoubleSolenoid::Value::kOff);
}

// Called once after isFinished returns true

bool MovingSolenoidBasic::RunsWhenDisabled() const {
    return false;
}
