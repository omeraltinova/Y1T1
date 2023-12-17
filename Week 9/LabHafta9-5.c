#include <stdio.h>



int main(void){
	int adet,i,j;
	printf("Karenin kenar uzunlugu kac olsun\n");
	scanf("%d",&adet);
	int dizi[adet][adet];
	for(i=0;i<adet;i++){
		for(j=0;j<adet;j++){
			printf("%d. satirin %d. sutununu giriniz\n",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
	}
	
	for(i=0,j=0;i<adet;i++,j++){
		printf("1. Kosegen:\n");
		printf("%d\t",dizi[i][j]);
	}
		printf("\n");
	for(i=0,j=adet-1;i<adet;i++,j--){
		printf("2. Kosegen:\n");
		printf("%d\t",dizi[i][j]);
	}
	
	
	return(0);
}
/*
 3 5 2 
 5 4 3
 7 8 9 */
