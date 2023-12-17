#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

    float benzin = 47.0;
    float km = 500;
    char benzin_km[80];
    sprintf(benzin_km,"km. de %5.3f lt benzin yakiyor",benzin/km);
    printf("%s ",benzin_km);

    return(0);
}