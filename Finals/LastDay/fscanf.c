#include <stdio.h>

int main(void){
    char isim[25];
    int vize;


    FILE *dosyaOku;
    dosyaOku=fopen("fprintf.txt","r");

    fscanf(dosyaOku,"%s %d\n",isim,&vize);

    printf("%s --> %d",isim,vize);


    return(0);
}