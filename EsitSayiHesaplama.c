#include <stdio.h>

int main(void){
	int i,j,adet;
	printf("Kac adet sayi girmek istiyorsunuz\n");
	scanf("%d",&adet);
	int deger[adet];
	
	
	for(i=0;i<adet;i++){
		printf("%d. sayiyi giriniz\n",i+1);
		scanf("%d",&deger[i]);
	}
	for(i=0;i<adet;i++){
		
		for(j=i+1;j<adet;j++){
			if((deger[i]==deger[j]))
			printf("%d. deger %d. degere esit deger: %d\n",i+1,j+1,deger[i]);
		}
	}
	
	return(0);
}
