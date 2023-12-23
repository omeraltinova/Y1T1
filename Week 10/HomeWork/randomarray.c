/*
Örnek-2)
Rastgele değerlerden oluşan 2 boyutlu dinamik bir dizi oluşturun. Diziyi ekrana yazdırın.


*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    srand(time(NULL));

    int satir,sutun;

    int i,j;


    printf("Kac adet satir ve sutun istiyorsunuz? Sirayla girin\n");
    scanf("%d %d",&satir,&sutun);

    int dizi[satir][sutun];

    for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
            dizi[i][j]= rand() % 1000; // 0 ile 1000 arasında sayı oluşturur
        }
    }


    for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
            printf(" %d ",dizi[i][j]);
        }
        printf("\n");
    }


    return(0);
}