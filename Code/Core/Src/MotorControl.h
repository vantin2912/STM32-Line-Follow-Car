/*
 * MotorControl.h
 *
 *  Created on: Sep 3, 2020
 *      Author: vanti
 */
#pragma once
#ifndef __MAIN_H
#include <main.h>
#endif

#ifndef SRC_MOTORCONTROL_H_
#define SRC_MOTORCONTROL_H_

void USR1_Motor1_EnablePWM(void);
void USR1_Motor1_DisablePWM(void);

void USR1_Motor2_EnablePWM(void);
void USR1_Motor2_DisablePWM(void);

void USR1_Motor1_SetPWM(int32_t PWMVal);
void USR1_Motor2_SetPWM(int32_t PWMVal);


#endif /* SRC_MOTORCONTROL_H_ */
