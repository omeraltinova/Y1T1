#include <stdio.h>


int main(void){

    FILE *dosyaYaz;
    dosyaYaz = fopen("fprintf.txt","w");

    char isim[25];
    int vize;

    printf("Vize ve final notu giriniz\n");
    scanf("%s %d",isim,&vize);

    fprintf(dosyaYaz,"%s %d\n",isim,vize);

    fclose(dosyaYaz);

    return(0);
}