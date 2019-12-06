#include "header.h"

#define GREEN 0
#define RED 7

void ledBlinkAll20WiringPi(){
	wiringPiSetup();
	pinMode(GREEN, OUTPUT);
	pinMode(RED, OUTPUT);
	for(;;){
		digitalWrite(GREEN, HIGH);
		digitalWrite(RED, HIGH);
		delay(25);
		digitalWrite(GREEN,LOW);
		digitalWrite(RED,LOW);
		delay(25);
	}
}

void ledBlinkRed5WiringPi(){
	wiringPiSetup();
	pinMode(RED, OUTPUT);
	for(;;){
		digitalWrite(RED, HIGH);
		delay(100);
		digitalWrite(RED, LOW);
		delay(100);
	}
}

void ledBlinkGreen5WiringPi(){
	wiringPiSetup();
	pinMode(GREEN, OUTPUT);
	for(;;){
		digitalWrite(GREEN, HIGH);
		delay(100);
		digitalWrite(GREEN, LOW);
		delay(100);
	}
}

void ledBlinkRandomWiringPi(){
	wiringPiSetup();
	pinMode(GREEN,OUTPUT);
	pinMode(RED,OUTPUT);
	for(;;){
		int waitingTime = (rand() % 146) + 20;
		digitalWrite(GREEN,HIGH);
		digitalWrite(RED,HIGH);
		delay(waitingTime);
		digitalWrite(GREEN, LOW);
		digitalWrite(RED, LOW);
		delay(waitingTime);
	}
}
