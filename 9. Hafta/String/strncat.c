#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){

    char dizi1[15]="Altinova";
    char dizi2[15]="Faruk ";
    strncat(dizi2,dizi1,5);
    printf("%s",dizi2);

    return(0);
}