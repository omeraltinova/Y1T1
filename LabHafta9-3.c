#include <stdio.h>




int main(void){
	int satir,sutun,i,j,toplam=0;
	printf("Kac adet satir girmek istiyorsunuz\n");
	scanf("%d",&satir);
	printf("Kac adet sutun girmek istiyorsunuz\n");
	scanf("%d",&sutun);
	int dizi[satir][sutun];
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%d. satirin %d. degerini giriniz\n",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
	}
	
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			toplam+=dizi[i][j];
		}
	}
	
		printf("Tum dizinin toplami %d\n",toplam);
		
		return(0);
}
