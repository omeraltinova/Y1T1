#include <stdio.h>



int main(void){

    FILE *dosyaOku;
    dosyaOku= fopen("text2.txt","r");
    char st1[30];

    fgets(st1,6,dosyaOku);
    printf("%s",st1);


    return(0);
}