#include <stdio.h>
#include <string.h>
int arama(char dizi[],char kr);

int main(void){
	char dizi[100];
	char kr;
	int len=0;
	
	printf("Bir cumle giriniz\n");
	gets(dizi);
	printf("Hangi karakteri aramak istiyorsunuz\n");
	scanf("%c",&kr);
	len=arama(dizi,kr);
	printf("%c karakterinden %d adet bulunuyor\n",kr,len);
}

int arama(char dizi[],char kr){
	int count=0,i,uzunluk=strlen(dizi);
	
	for(i=0;i<uzunluk;i++){
		if(dizi[i]==kr){
			count++;
		}
	}
	return(count);
}
