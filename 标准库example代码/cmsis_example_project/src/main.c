#include <stm32f10x.h>
int main(int argc, char const *argv[])
{
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
  GPIO_InitTypeDef GPIO_initStructure;
  GPIO_initStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_initStructure.GPIO_Pin = GPIO_Pin_0;
  GPIO_initStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOA, &GPIO_initStructure);
  while (1)
  {
    
  }
  
  /* code */
  return 1;
}
