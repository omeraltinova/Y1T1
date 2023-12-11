#include <stdio.h>


int main(void){
	int adet,i,j;
	printf("Kac adet sayi girmek istiyorsunuz\n");
	scanf("%d",&adet);
	int dizi[adet];
	for(i=0;i<adet;i++){
		printf("%d. sayiyi giriniz\n",i+1);
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<adet;i++){
		for(j=i+1;j<adet;j++){
			if(dizi[i]==dizi[j]){
				printf("---------------------------------------\n");
				printf("%d. sayi ile %d. sayi birbirine esittir\n Sayinin degeri: %d\n",i+1,j+1,dizi[i]);
				printf("---------------------------------------\n");
			}
			
		}
	}
	
	
	return(0);
	
}
