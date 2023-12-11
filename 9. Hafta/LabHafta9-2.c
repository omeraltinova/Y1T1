#include <stdio.h>

int main(void){
	int adet,i,j,temp;
	printf("Kac adet sayi girmek istiyorsunuz\n");
	scanf("%d",&adet);
	int dizi[adet];
	for(i=0;i<adet;i++){
		printf("%d. sayiyi giriniz\n",i+1);
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<adet-1;i++){
		for(j=0;j<adet-i;j++){
			if(dizi[j]>dizi[j+1]){
			temp=dizi[j];
			dizi[j]=dizi[j+1];
			dizi[j+1]=temp;
			}
		}
	}
	for(i=0;i<adet;i++){
		printf("%d\t",dizi[i]);
	}
	return(0);
}
