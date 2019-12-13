#ifndef GPIO_G3_HEADER_H
#define GPIO_G3_HEADER_H

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define IN  0
#define OUT 1

#define LOW  0
#define HIGH 1

#define GREEN  4
#define RED 17

#include <wiringPi.h>
#include <time.h>
#include "function.c"

static int GPIOExport(int);
static int GPIOUnexport(int);
static int GPIODirection(int, int);
static int GPIORead(int);
static int GPIOWrite(int, int);

void ledBlinkAll20WiringPi();
void ledBlinkRed5WiringPi();
void ledBlinkGreen5WiringPi();
void ledBlinkRandomWiringPi();

#endif
