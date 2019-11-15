#define DRV_KEY_ENABLE
#include "drv_key.h"

GPIO_PinState read_key1_states(void)
{
	return HAL_GPIO_ReadPin(KEY1_GPIO_Port,KEY1_Pin);
}

GPIO_PinState read_key2_states(void)
{
	return HAL_GPIO_ReadPin(KEY2_GPIO_Port,KEY2_Pin);
}

GPIO_PinState read_key3_states(void)
{
	return HAL_GPIO_ReadPin(KEY3_GPIO_Port,KEY3_Pin);
}
