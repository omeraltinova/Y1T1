#include <stdio.h>
#include <stdlib.h>


int main(void){
    int adet,i;
    int *dizi;

    printf("kac adet sayi girisi yapmak istiyorsun?\n");
    scanf("%d",&adet);

    dizi= calloc(adet,sizeof(int));



    for(i=0;i<adet;i++){
        printf("%d. sayiyi giriniz\n",i+1);
        scanf("%d",&dizi[i]);
    }


    for(i=0;i<adet;i++){
        printf("Number %d is %d\n",i+1,dizi[i]);
    }




    return(0);
}