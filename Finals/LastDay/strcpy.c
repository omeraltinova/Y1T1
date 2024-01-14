#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){

    char isim[25]={"Merhaba ben Faruk!"};
    char isim2[25];

   // strcpy(isim2,isim);
    strncpy(isim2,isim,25);
    printf("%s",isim2);




    return(0);
}