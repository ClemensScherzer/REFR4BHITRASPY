#include "function.h"


int main(int argc, char *argv[]){
	//ledBlinkAll20WiringPi();
	//ledBlinkRed5WiringPi();
	//ledBlinkGreen5WiringPi();
	//ledBlinkRandomWiringPi();
	//return 0;


	/*
	 * Enable GPIO pins
	 */
	if (-1 == GPIOExport(GREEN) || -1 == GPIOExport(RED))		
		return(1);

	/*
	 * Set GPIO directions
	 */
	if (-1 == GPIODirection(GREEN, OUT) || -1 == GPIODirection(RED, OUT))
		return(2);

	do {
		/*
		 * Write GPIO value
		 */
		if(-1 == GPIOWrite(GREEN, LOW))
			return(3);
		if(-1 == GPIOWrite(RED, LOW))
			return(3);

		sleep(1/atoi(argv[3])/2);		
	
		if (-1 == GPIOWrite(GREEN, HIGH))
			return(3);
		if(-1 == GPIOWrite(RED, HIGH))
			return(3);

		sleep(1/atoi(argv[3])/2);
		//sleep(1/atoi(argv[3])/2);

		//sleep(1/atoi(argv[3])/2);
	}while (0==0);

	/*
	 * Disable GPIO pins
	 */
	if (-1 == GPIOUnexport(GREEN) || -1 == GPIOUnexport(RED))
		return(4);

	return(0);
}
