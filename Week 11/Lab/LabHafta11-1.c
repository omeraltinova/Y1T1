#include <stdio.h>
#include <string.h>


int main(void){
	char dizi[50];
	char temp;
	int uzunluk,i;
	
	printf("Bir cumle giriniz\n");
	gets(dizi);
	uzunluk=strlen(dizi);
			
	for(i=0;i<uzunluk/2;i++){
		temp=dizi[i];
		dizi[i]=dizi[uzunluk-i-1];
		dizi[uzunluk-i-1]=temp;
	}
	
	puts(dizi);

	return(0);
}
