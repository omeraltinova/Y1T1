#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){

    srand(time(NULL));
    int adet=5,plus=3;
    int *dizi1;
   // dizi1 = malloc(sizeof(int)*adet);
   // dizi1= calloc(adet,sizeof(int));
   dizi1= malloc(sizeof(int)*adet);
  /*  for(int i=0;i<adet;i++){
        printf("%d. eleman : %d ",i+1,dizi1[i]);
    }*/
    for(int i=0;i<adet;i++){
        dizi1[i]= rand() % 100 +1;
    }
    for(int i=0;i<adet;i++){
        printf("%d. eleman : %d ",i+1,dizi1[i]);
    }
    dizi1= realloc(dizi1,(adet+plus)*sizeof(int));
    for(int i=adet;i<adet+plus;i++){
        dizi1[i]= rand() % 100 +1;
    }
        for(int i=0;i<adet+plus;i++){
        printf("%d. eleman : %d ",i+1,dizi1[i]);
    }

    return(0);
}