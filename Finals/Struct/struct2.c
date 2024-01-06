#include <stdio.h>

struct tarih{
    int ay,gun,yil;
};

struct ogrenci
{
    char ad[20];
    int sinif;
    struct tarih dogumtarihi;
};


int main(void){

    struct ogrenci ogrenci0;
    printf("Adinizi ve sinifinizi giriniz\n");
    scanf("%s %d",ogrenci0.ad,&ogrenci0.sinif);
    printf("Dogum gunu ayi ve yilinizi giriniz\n");
    scanf("%d %d %d",&ogrenci0.dogumtarihi.gun,&ogrenci0.dogumtarihi.ay,&ogrenci0.dogumtarihi.yil);
    printf("Merhaba %s, sinifin %d, dogum tarihin %d.%d.%d",ogrenci0.ad,ogrenci0.sinif,ogrenci0.dogumtarihi.gun,ogrenci0.dogumtarihi.ay,ogrenci0.dogumtarihi.yil);




    return(0);
}