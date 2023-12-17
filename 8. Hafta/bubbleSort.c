#include <stdio.h>

int main(void){
    int adet,i,j,gecici;

    printf("Kac adet sayi girmek istiyorsunuz\n");
    scanf("%d",&adet);
    int dizi[adet];

    for (i = 0; i < adet; i++){
    printf("%d. sayiyi giriniz\n",i+1);
    scanf("%d",&dizi[i]);
    }
    for(j=0;j<adet;j++){
        for(i=0;i<adet-j;i++){
            if(dizi[i]>dizi[i+1]){
                gecici=dizi[i];
                dizi[i]=dizi[i+1];
                dizi[i+1]=gecici;
            }
        }
    }
        for(i=0;i<adet;i++)
            printf(" %d ",dizi[i]);
}