#include <stdio.h>
#include <math.h>

struct nokta
{
    int x,y;
}nokta1,nokta2;


int main(void){

float mesafe;

    printf("1. noktanin x ve y kordinatlarini giriniz\n");
    scanf("%d %d",&nokta1.x,&nokta1.y);
    printf("2. noktanin x ve y kordinatlarini giriniz\n");
    scanf("%d %d",&nokta2.x,&nokta2.y);

    mesafe = sqrt(pow(nokta1.x-nokta2.x,2)+pow(nokta1.y-nokta2.y,2));
    printf("ikisi arasindaki mesafe %.2f dir",mesafe);




    return(0);
}