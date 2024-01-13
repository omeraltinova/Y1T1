#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void bubble(int dizi[],int adet);


int main(void){
    srand(time(NULL));
    int adet=5;
    int *dizi;

    dizi = malloc(sizeof(int)*adet);

    for(int i=0;i<adet;i++){
        dizi[i]= rand() % 50;
    }

    for(int i=0;i<adet;i++){
        printf(" %d ",dizi[i]);
    }
    printf("\n");

    bubble(dizi,adet);


    return(0);
}

void bubble(int dizi[],int adet){
    int temp;
    for(int i=0;i<adet-1;i++){
        for(int j=0;j<adet;j++){
            if(dizi[j]>dizi[j+1]){
                temp=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=temp;
            }
        }
    }

    for(int i=0;i<adet;i++){
        printf(" %d ",dizi[i]);
    }
}