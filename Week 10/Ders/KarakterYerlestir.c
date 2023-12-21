#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void yerlestir(char dizi[],char karakter);

int main(void){
    char dizi[50];
    char karakter;

    printf("Bir cumle girin\n");
    gets(dizi);
    printf("Hangi harfle degistirmek istiyorsun?\n");
    scanf("%c",&karakter);
    yerlestir(dizi,karakter);


    return(0);
}


void yerlestir(char dizi[],char karakter){
    int uzunluk=strlen(dizi);
    int i;
    for(i=0;i<uzunluk-1;i++){
        dizi[i]=karakter;
    }
    dizi[uzunluk-1]='\0';
    printf("%s",dizi);
}
