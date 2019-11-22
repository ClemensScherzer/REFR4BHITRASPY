//
// Created by Lukas on 22.11.2019.
//

#include <stdlib.h>
#include <mem.h>

#include "header.h"
FILE *file;

bool reportOpenFile(char *source){
    file = fopen(source,"r");
    return true;

}

bool reportReport(){

    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    int zeilen= 0;
    int anzGET = 0;
    int anzPOST = 0;
    int anzSmartphone=0;
    int anzIPhone=0;


    while ((read = getline(&line, &len, file)) != -1) {
        zeilen++;
        if(strstr(line,"GET")!=NULL){
            anzGET++;
        } else if(strstr(line,"POST")!=NULL){
            anzPOST++;
        }
        if(strstr(line,"Android")!=NULL){
            anzSmartphone++;
        } else if(strstr(line,"IPhone")!=NULL){
            anzIPhone++;
        }
    }
    printf("\nZeilen: %d",zeilen);
    printf("\nGets: %d",anzGET);
    printf("\nPosts: %d",anzPOST);
    printf("\nSmartphones: %d",anzSmartphone);
    printf("\nIPhones: %d",anzIPhone);

    return true;

}

bool reportCloseFile(){
    fclose(file);
    return true;


}
