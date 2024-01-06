#include <stdio.h>


int main(void){
    char ch='F';
    FILE *dosyaYaz;
    dosyaYaz=fopen("text5.txt","w");
    fputc(ch,dosyaYaz);
    fputc('a',dosyaYaz);
    fputc('r',dosyaYaz);
    fputc('u',dosyaYaz);
    fputc('k',dosyaYaz);
    fputc('\n',dosyaYaz); 


    return(0);
}