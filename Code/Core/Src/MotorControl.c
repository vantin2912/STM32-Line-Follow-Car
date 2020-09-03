/*
 * MotorControl.c
 *
 *  Created on: Sep 3, 2020
 *      Author: vanti
 */
#include "MotorControl.h"
void USR1_Motor1_EnablePWM(void)
{
	LL_TIM_CC_EnableChannel(TIM1,LL_TIM_CHANNEL_CH1);
}

void USR1_Motor1_DisablePWM(void)
{
	LL_TIM_CC_DisableChannel(TIM1,LL_TIM_CHANNEL_CH1);
}


void USR1_Motor2_EnablePWM(void)
{
	LL_TIM_CC_EnableChannel(TIM1,LL_TIM_CHANNEL_CH3);
}

void USR1_Motor2_DisablePWM(void)
{
	LL_TIM_CC_EnableChannel(TIM1,LL_TIM_CHANNEL_CH1);
}

void USR1_Motor1_SetPWM(int32_t PWMVal) // PWM Val between 0-7200
{
	if(PWMVal >= 0)
	{
		LL_TIM_OC_SetCompareCH1(TIM1, (uint16_t)PWMVal);
		LL_GPIO_ResetOutputPin(GPIOB, LL_GPIO_PIN_15);
	} else
	{
		LL_TIM_OC_SetCompareCH1(TIM1,(uint16_t) -PWMVal);
		LL_GPIO_SetOutputPin(GPIOB, LL_GPIO_PIN_15);
	}
}
void USR1_Motor2_SetPWM(int32_t PWMVal) // PWM Val between 0-7200
{
	if(PWMVal >= 0)
	{
		LL_TIM_OC_SetCompareCH3(TIM1, (uint16_t)PWMVal);
		LL_GPIO_ResetOutputPin(GPIOA, LL_GPIO_PIN_9);
	} else
	{
		LL_TIM_OC_SetCompareCH3(TIM1, (uint16_t)-PWMVal);
		LL_GPIO_SetOutputPin(GPIOA, LL_GPIO_PIN_9);
	}
}
