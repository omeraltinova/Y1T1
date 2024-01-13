#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL));
    int **dizi1;
    int **dizi2;
    int **dizi3;
    int satir1=5,sutun1=3;
    int satir2=3,sutun2=2;
    int i,j,k;

    dizi1= malloc(sizeof(int)*satir1);
    dizi2= malloc(sizeof(int)*satir2);
    dizi3= calloc(satir1,sizeof(int));
    for(i=0;i<satir1;i++){
        dizi1[i]=malloc(sizeof(int)*sutun1);
        for(j=0;j<sutun1;j++){
            dizi1[i][j]= rand() % 10+10;
        }
    }
        for(i=0;i<satir2;i++){
        dizi2[i]=malloc(sizeof(int)*sutun2);
        for(j=0;j<sutun2;j++){
            dizi2[i][j]= rand() % 10+10;
        }
    }
        for(i=0;i<satir1;i++){
        dizi3[i]=calloc(sutun2,sizeof(int));
    }

    printf("A:\n");
    for(i=0;i<satir1;i++){
        for(j=0;j<sutun1;j++){
            printf("%d ",dizi1[i][j]);
        }
        printf("\n");
    }
    printf("B:\n");
    for(i=0;i<satir2;i++){
        for(j=0;j<sutun2;j++){
            printf("%d ",dizi2[i][j]);
        }
        printf("\n");
    }

    printf("AxB:\n");
    for(i=0;i<satir1;i++){
        for(j=0;j<sutun2;j++){
            for(k=0;k<sutun1;k++){
                dizi3[i][j]+=dizi1[i][k]*dizi2[k][j];
            }
        }
    }
    for(i=0;i<satir1;i++){
        for(j=0;j<sutun2;j++){
            printf("%d ",dizi3[i][j]);
        }
        printf("\n");
    }

    free(dizi1);
    free(dizi2);
    free(dizi3);
    return(0);
}