#include <stdio.h>

int main(void){


    FILE *ofp;
    ofp = fopen("dosya1.txt","w");
    if(ofp==NULL){
        perror("Hata: dosya acilamadi");
    }
    else {
        fputc('x',ofp);
        if(ferror(ofp)){
            printf("Hata yazma islemi gerceklesemedi\n");
        }
    }
    fclose(ofp);
    return(0);
}