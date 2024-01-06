#include <stdio.h>


int main(void){

    FILE *dosyaYaz;
    dosyaYaz=fopen("text6.txt","w");
    fputs("Faruk 100\n",dosyaYaz);
    fputs("Emir 44\n",dosyaYaz);








    return(0);
}