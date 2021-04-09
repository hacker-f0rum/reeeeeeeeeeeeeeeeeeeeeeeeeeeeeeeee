#pragma config(Sensor, in1,    line_tracker,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, dgtl1,  limit_switch,   sensorTouch)
#pragma config(Sensor, dgtl2,  bump_switch,    sensorTouch)
#pragma config(Sensor, dgtl10, red_LED,        sensorLEDtoVCC)
#pragma config(Sensor, dgtl11, yellow_LED,     sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, green_LED,      sensorLEDtoVCC)
#pragma config(Motor,  port1,           left_motor,    tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port6,           claw_motor,    tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port7,           arm_motor,     tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port10,          right_motor,   tmotorVex393_HBridge, openLoop)






// place tape in front of robot

}

*/

task main()

{														//BEGIN Program -- DO NOT REMOVE
turnLEDOn(green_LED);

startMotor(left_motor ,30);

startMotor(right_motor ,30);

//untilLight(2300, line_tracker);// no change in the program until the 'value' is less than the threshold

untilDark(2830, line_tracker);

turnLEDOff(green_LED);

turnLEDOff(red_LED);

wait(2);

stopMotor(left_motor);

stopMotor(right_motor);

startMotor(claw_motor , 50);

wait(1.5);

stopMotor(claw_motor);

wait(1);

startMotor(claw_motor , -50);

wait(1.5);

stopMotor(claw_motor);

startMotor(arm_motor , 30);

wait(3);

stopMotor(arm_motor);

startMotor(left_motor , 50);

startMotor(right_motor , -50);

wait(2.5);

stopMotor(left_motor);

stopMotor(right_motor);

startMotor(left_motor , 50);

startMotor(right_motor , 50);

wait(.000005);

stopMotor(left_motor);

stopMotor(right_motor);

turnLEDOff(red_LED);

turnLEDOn(green_LED);

wait(5);

turnLEDOff(green_LED);

wait(2.5);
}													//END Program -- DO NOT REMOVE
