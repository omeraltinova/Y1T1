#include <stdio.h>
#include <string.h>
struct ogrenci
{
    char isim[15];
    int yas;
    float ortalama;
};

void giris(struct ogrenci sinif[]);

int main(void){
    struct ogrenci sinif[5];
    float enbuyuk= 0.0;
    char birinci[15];
    int i;
    
    giris(sinif);

    for(i=0;i<5;i++){
        if(sinif[i].ortalama>enbuyuk){
            enbuyuk= sinif[i].ortalama;
            strcpy(birinci,sinif[i].isim);
        }
    }

    printf("Sinif birincis %s",birinci);
    printf("\nOrtalama: %.2f",enbuyuk);

    return(0);
}

void giris(struct ogrenci sinif[]){
    int i;
    for(i=0;i<5;i++){
        scanf("%s",sinif[i].isim);
        scanf("%d %f",&sinif[i].yas,&sinif[i].ortalama);
    }
}