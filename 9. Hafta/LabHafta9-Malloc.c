#include <stdio.h>

int main(void){
	int *dizi;
	int boyut;
	printf("Kac adet veri girmek istiyorsunuz\n");
	scanf("%d",&boyut);
	
	dizi= malloc(sizeof(int)*boyut);
	
	if(dizi==NULL){
		printf("Yer ayirma basarisiz oldu\n");
		return(1);
	}
	else 
		printf("Yer ayirma basarili\n");
}
