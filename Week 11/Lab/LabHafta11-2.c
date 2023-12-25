#include <stdio.h>
#include <string.h>

int uzunluk(char dizi[]);

int main(void){
	char dizi[100];
	int len;
	
	printf("Bir cumle giriniz\n");
	gets(dizi);
	len=uzunluk(dizi);
	printf("Dizinin uzunlugu %d",len);
}

int uzunluk(char dizi[]){
	
	int uzunluk,i;
	
	for(i=0;dizi[i]!='\0';i++){
		uzunluk++;
	}
		
	return(uzunluk);
}
