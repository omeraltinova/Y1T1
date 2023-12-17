#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){

    char dizi1[15]="iyi gunler ";
    char dizi2[15]="nasilsin?";
    strcat(dizi1,dizi2);
    printf("%s",dizi1);

    return(0);
}