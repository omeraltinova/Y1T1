#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *dizi;
	int boyut,i,yanit,j,k;
	printf("Kac adet veri girmek istiyorsunuz\n");
	scanf("%d",&boyut);
	
	dizi=malloc(sizeof(int)*boyut);
	
	if(dizi==NULL){
		printf("Yer ayirma basarisiz oldu\n");
		return(1);
	}
	else {
		printf("Yer ayirma basarili\n");}

		for(i=0;i<boyut;i++){
		printf("%d. degeri giriniz\n",i+1);
		scanf("%d",&dizi[i]);
	}

		for(i=0;i<boyut;i++){
		printf("%d. degeriniz: %d\n",i+1,dizi[i]);
	}

		printf("Hangi islemi yapmak istiyorsunuz\n");
		printf("1- Bellek temizleme\n2- Bellek genisletme\n");
		scanf("%d",&yanit);
		if(yanit==1){
			free(dizi);
			printf("Bellek temizlendi\n");
		}
		else if(yanit==2){
			printf("Kac adet daha deger girmek istiyorsunuz\n");
			scanf("%d",&j);
			dizi= realloc(dizi,sizeof(int)*(boyut+j));
			for(i=boyut,k=1;i<boyut+j;i++,k++){
				printf("%d. degeri giriniz\n",k);
				scanf("%d",&dizi[i]);
			}
			for(i=boyut;i<j+boyut;i++){
				printf("Yeni %d. deger: %d\n",i+1,dizi[i]);
			}
		}
		

	return(0);
}
	
