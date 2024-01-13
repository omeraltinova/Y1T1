#include <stdio.h>
typedef struct{
	char isim[25];
	int numara;
	int vize;
}ogrenciler;

int main(void){
	int i;
	ogrenciler ogrenci[3];
	 
	for(i=0;i<3;i++){
		printf("%d. ogrencinin adini giriniz\n",i+1);
		scanf("%s",ogrenci[i].isim);
		printf("%d. ogrencinin numarasini ve vize notunu giriniz\n",i+1);
		scanf("%d %d",&ogrenci[i].numara,&ogrenci[i].vize);
	}
	
	for(i=0;i<3;i++){
		printf("%12s : Numara: %3d, Vize: %3d\n",ogrenci[i].isim,ogrenci[i].numara,ogrenci[i].vize);
	}
	
	
	
	return(0);
}
