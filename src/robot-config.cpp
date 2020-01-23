#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor Left_motor_drive = motor(PORT11, ratio18_1, false);
motor Right_motor_drive = motor(PORT19, ratio18_1, false);
motor Left_arm = motor(PORT13, ratio18_1, false);
motor Right_arm = motor(PORT16, ratio18_1, false);
motor Centre_motor_drive = motor(PORT20, ratio18_1, false);
motor intake_lift = motor(PORT18, ratio18_1, false);
motor Right_intake = motor(PORT17, ratio18_1, false);
motor Left_intake = motor(PORT12, ratio18_1, false);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}