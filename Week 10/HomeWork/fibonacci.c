/*
Örnek -1 ) Bir dinamik fibonacci dizisi oluşturun. Dizinin eleman sayısını kullanıcıdan alın.
Dizinin son elemanını pointer yardımıyla gösteriniz. */




#include <stdio.h>
#include <stdlib.h>


int main(void){

    int *dizi;

    int adet,i;

    printf("Kac adetli bir fibonacci dizisi istiyorsunuz?\n");
    scanf("%d",&adet);
    dizi = malloc(sizeof(int)*adet);
    dizi[0]=1;dizi[1]=1;
    for(i=2;i<adet;i++){
        dizi[i]=dizi[i-1]+dizi[i-2];
    }

        printf("Dizinin tum elamanlari:");
    for(i=0;i<adet;i++){
        printf(" %d ",dizi[i]);
    }

    printf("\nBu dizinin son elemani %d dir",*(dizi+adet-1));


    return(0);
}