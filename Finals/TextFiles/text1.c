#include <stdio.h>


int main(void){

    FILE *ogrenciDosyasi;
    ogrenciDosyasi= fopen("test.txt","w");

    if(ogrenciDosyasi==NULL){
        printf("Dosya olusturma basarisiz oldu\n");
    }
    else {
        printf("Dosya olusturma basarili oldu\n");
    }

    fclose("text.txt");

    return(0);
}