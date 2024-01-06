#include <stdio.h>



int main(void){

    FILE *dosyaOku;
    dosyaOku= fopen("text2.txt","r");
    char st1[30];

    fgets(st1,4,dosyaOku);
    printf("%s",st1);


    return(0);
}