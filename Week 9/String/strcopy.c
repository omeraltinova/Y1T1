#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){

    char dizgi1[40]="Omer Faruk";
    char dizgi2[40];

    strcpy(dizgi2,dizgi1);
    printf("%s",dizgi2);

    return(0);
}