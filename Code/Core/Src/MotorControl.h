/*
 * MotorControl.h
 *
 *  Created on: Sep 3, 2020
 *      Author: vanti
 */
#pragma once

#include <main.h>


#ifndef SRC_MOTORCONTROL_H_
#define SRC_MOTORCONTROL_H_

typedef struct USR_Encoder_Data
{
	uint8_t EncReso;
	int16_t EncCount;
	uint32_t* EncCurrentVal;
	uint32_t EncPrevVal;
} USR_Encoder_Data;


typedef struct USR_Motor_Data
{
	float RPSec2PWMScale;
	float Velocity2RPSecScale;
	float CurrentRPSec;
	USR_Encoder_Data EncoderData;

} USR_Motor_Data;

void USR1_Motor1_EnablePWM(void);
void USR1_Motor1_DisablePWM(void);

void USR1_Motor2_EnablePWM(void);
void USR1_Motor2_DisablePWM(void);

void USR1_Motor1_SetPWM(int32_t PWMVal);
void USR1_Motor2_SetPWM(int32_t PWMVal);

void USR1_Servo_SetAngle(int8_t ServoAngle);
#endif /* SRC_MOTORCONTROL_H_ */
