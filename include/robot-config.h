using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor Left_motor_drive;
extern motor Right_motor_drive;
extern motor Left_arm;
extern motor Right_arm;
extern motor Centre_motor_drive;
extern motor intake_lift;
extern motor Right_intake;
extern motor Left_intake;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );