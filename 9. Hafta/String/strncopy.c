#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){

    char dizi1[40]="Altinova";
    char dizi2[40]="Omer";

    strncpy(dizi1,dizi2,3);
    printf("%s",dizi1);

    return(0);
}