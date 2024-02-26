#include <stdio.h>
#include <util/delay.h>
//#include "MCAL/DIO/DIO_interface.h"
//#include "HAL/LCD/LCD_interface.h"
//#include "HAL/Keypad/Keypad_interface.h"
#include "Claculator.h"



int main() {

	DIO_enuInit();
		Keypad_enuInit();
		LCD_enuInit();
	while (1) {

		input();
				process();


	}
	return 0;
}
