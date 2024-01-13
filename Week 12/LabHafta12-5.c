#include <stdio.h>


int main(void){
	char isim[25];
	int numara,vize;
	FILE *dosyaOku;
	dosyaOku= fopen("kisi.txt","r");
	
	int no;
	printf("istediginiz ogrenci numarasini giriniz\n");
	scanf("%d",&no);
	
	while(fscanf(dosyaOku,"%s %d %d",isim,&numara,&vize)!=EOF){
		if(numara==no){
			printf("Ogrenci bulundu:\n");
			printf("|isim: %-8s|numara: %-3d|vize: %-3d|\n",isim,numara,vize);
		}
	}
	
	return(0);
}
