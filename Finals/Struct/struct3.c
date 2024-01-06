#include <stdio.h>
#include <math.h>

struct nokta
{
    int x,y;
};
struct nokta giris(void);
float mesafe_fon(struct nokta*,struct nokta*);

int main(void){

    struct nokta nokta1,nokta2;
    float mesafe;
    nokta1=giris();
    nokta2=giris();

    mesafe=mesafe_fon(&nokta1,&nokta2);
    printf("iki nokta arasindaki mesafe %.2f",mesafe);


    return(0);
}

struct nokta giris(void){
    struct nokta gecici;
    printf("Noktanin x ve y kordinatlarini giriniz\n");
    scanf("%d %d",&gecici.x,&gecici.y);
    return(gecici);
}

float mesafe_fon(struct nokta *nokta1,struct nokta *nokta2){
    float uz1 = pow(nokta1->x-nokta2->x,2);
    float uz2 = pow(nokta1->y-nokta2->y,2);

    return(sqrt(uz1+uz2));
}