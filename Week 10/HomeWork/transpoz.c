/*
Örnek-3 ) 3 * 2 rastgele elemanlardan oluşan bir dinamik dizi oluşturunuz. Bu dizinin
transpozunu (satır ile sütun yer değiştirecek.) alın. Dizinin her iki halini yazdırın.
Not) 2 boyutlu dizi A matrisi olsun. A matrisinin transpozu A üzeri T ile gösterilir.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int satir=3,sutun=2; // Satir ve sutun araligini buradan duzenleyebilirsiniz\n

    int **dizi1= malloc(sizeof(int)*satir);
    int **dizi2=malloc(sizeof(int)*sutun);
    int i,j;

    for(i=0;i<satir;i++){
        dizi1[i]=malloc(sizeof(int)*sutun);
        for(j=0;j<sutun;j++){
            dizi1[i][j]= rand() % 90 +10;
        }
    }
    for(i=0;i<sutun;i++){
        dizi2[i]=malloc(sizeof(int)*satir);
        for(j=0;j<satir;j++){
            dizi2[i][j]= dizi1[j][i];
        }
    }



    printf("-----------Dizi 1------------\n");


    for(i=0;i<satir;i++){ // Dizi1
        for(j=0;j<sutun;j++){
            printf(" %d ",dizi1[i][j]);
        }
        printf("\n");
    }

    printf("-----------Dizi 2------------\n");

    for(i=0;i<sutun;i++){ // Dizi2
        for(j=0;j<satir;j++){
            printf(" %d ",dizi2[i][j]);
        }
        printf("\n");
    }












    return(0);
}