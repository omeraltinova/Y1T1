#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
	int alfabetik=0,numerik=0,ozel=0;
	char dizi[50];
	int uzunluk,i;
	printf("Dizgi giriniz\n");
	gets(dizi);
	uzunluk=strlen(dizi);
	
	for(i=0;i<uzunluk;i++){
		if(isalpha(dizi[i])){
			alfabetik++;
		}
		else if(isdigit(dizi[i])){
			numerik++;
		}
		else {
			ozel++;
		}
			
	}
	
	printf("%d Alfabetik %d numerik %d ozel karakter bulunuyor\n",alfabetik,numerik,ozel);
	
	return(0);
}
