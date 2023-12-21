#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int kacharf(char dizi[],char kr);

int main(void){
    char dizi[50];
    char karakter;
    int tekrar;
    printf("Lutfen bir cumle giriniz\n");
    gets(dizi);
    printf("Bu cumlede hangi harfi ariyorsunuz\n");
    scanf("%c",&karakter);
    tekrar=kacharf(dizi,karakter);
    printf("Buyuk ve kucuk olmak uzere ");
    printf("'%c' harfi bu cumlede %d adet var",karakter,tekrar);


    return(0);
}


int kacharf(char dizi[],char kr){
    int uzunluk= strlen(dizi);
    int i,tekrar=0,harf=-32;
    if(kr<=90&&kr>=65){
        harf=32;
    }
    for(i=0;i<uzunluk;i++){
        if(dizi[i]==kr||dizi[i]==kr+harf){
            tekrar++;
        }  
    }
        return(tekrar);
}


