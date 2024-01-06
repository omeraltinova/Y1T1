#include <stdio.h>


int main(void){

    int mt1,mt2,final,donemnotu;
    char ad[30];
    FILE *dosyaOku;
    dosyaOku=fopen("ogrenci.txt","r");

    while(fscanf(dosyaOku,"%s %d %d %d\n",ad,&mt1,&mt2,&final)!= EOF){
        donemnotu= (mt1*0.25)+(mt2*0.25)+(final*0.5);
        printf("%s donem sonu notu %d\n",ad,donemnotu);
    }

    fclose(dosyaOku);
    return(0);
}