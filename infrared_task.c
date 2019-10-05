/** 
  * @file infrared_task.c
  * @version 1.0
  * @date Step,24th 2019
	*
  * @brief  ��翪�ؼ��
	*
  *	@author Haoyun Yan
  *
  */
	

#include "infrared_task.h"

void infrared_task(void const * argument)
{
	
	if(HAL_GPIO_ReadPin(infrared_1_GPIO_Port,infrared_1_Pin))
	{	
		__HAL_TIM_SetCompare(&htim13,TIM_CHANNEL_1,82);
		Master change this row.
		HAL_GPIO_WritePin(LED_C_GPIO_Port,LED_C_Pin,GPIO_PIN_RESET);
		Joe Edit��֧������һ�����룻
	}
	else
	{
		

		__HAL_TIM_SetCompare(&htim13,TIM_CHANNEL_1,0);
		HAL_GPIO_WritePin(LED_C_GPIO_Port,LED_C_Pin,GPIO_PIN_SET);
	}
	
}

