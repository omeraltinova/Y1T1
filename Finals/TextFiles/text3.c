#include <stdio.h>

int main(void){

    int x,y,k;
    double z;
    char ch;
    FILE *dosyaOku;
    dosyaOku=fopen("text3.txt","r");

    fscanf(dosyaOku,"%d\n",&x);
    fscanf(dosyaOku,"%c %d %d\n",&ch,&k,&y);
    fscanf(dosyaOku,"%lf\n",&z);

    printf("%d\n%c %d %d\n%lf",x,ch,k,y,z);



    return(0);
}