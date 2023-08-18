//#include <stdint.h>
//#include <stdlib.h>
#include "stm32g031xx.h"

#include "firmware_functions.h"
#define uint unsigned int
#define uint32_t unsigned int
#define int32_t int

__attribute__((section(".text")))
int main(void);

void delay(volatile uint32_t d)
{
  while (d-- != 0)
    ;
}

int main(void) {
	//__asm__("bl 0x800f2e0\n\t");
	//short brightness = 80;
	//lcd_bright(&brightness);
	RCC->APB2ENR = RCC_APB2ENR_IOPAEN;  // enable PORTA
	GPIOA->CRH = (0b0010 << 4);  // CNF=0, MODE=2 (2MHz output)

	  while (1)                    // forever loop
	  {
	    GPIOA->ODR ^= (1<<11);      // toggle LED
	    delay(80000);

	lcd_on();
	clearscreen();
	SetColor(0x00FFEEFF);
	DrawRect(0,100,60,110);
	SetColor(0x00FF0000);
	DrawRect(0,150,20,180);
	SetColor(0x0000FF00);
	DrawRect(20,150,40,180);
	SetColor(0x000000FF);
	DrawRect(40,150,60,180);
	  }
	/*for(int c=0; c<0x00FFFFFF; c++) {
	for(int x=1; x<60; x++){
		for(int y=1; y<180; y++) {
			SetColor(c);
			DrawRect(0,0,x,y);
			lcd_refresh();
		}
	}
	}*/
	return 0;
}

__attribute__((naked, noreturn)) void Reset_Handler(void) {

  main();             // Call main()
  //for (;;) (void) 0;  // Infinite loop in the case if main() returns
}

