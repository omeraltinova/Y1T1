#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){

    char dizi1[15]="Faruk";
    char dizi2[15]="FarFar";
    printf("%d",strncmp(dizi1,dizi2,4));

    return(0);
}