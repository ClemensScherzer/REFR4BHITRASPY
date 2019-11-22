#include <stdio.h>
#include "header.h"

int main() {

    const char source[100] = "C:\\Users\\clemi\\Documents\\Schule\\OneDrive - HTL Wels\\4. Klasse\\SYT - REFR\\WarmingUp_G\\access.log.6";

    if(reportOpenFile(source)) {
        if (reportReport()) {
            if (reportCloseFile()) {

            }
            else {
                printf("Error while closing file!\n");
            }
        } else {
            if (reportCloseFile()) {

            }
            else {
                printf("Error while closing file!\n");
            }
            printf("Error processing file!\n");
        }
    } else{
        if (reportCloseFile()) {

        }
        else {
            printf("Error while closing file!\n");
        }
        printf("Error while opening file!\n");
    }

    return 0;
}