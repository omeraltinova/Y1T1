#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){

    char dizi1[15]="Faruk";
    char dizi2[40]="Omer Faruk Altinova";
    if(strstr(dizi2,dizi1)==NULL){
        printf("%s dizi icinde yok",dizi1);
    }
    else {
        printf("%s dizi icinde var",dizi1);
    }

    return(0);
}