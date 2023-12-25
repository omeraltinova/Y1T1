#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void){
	char dizi[50];
	int bosluk=0,i;
	
	printf("Dizi giriniz\n");
	gets(dizi);
	
	for(i=0;i<strlen(dizi);i++){
		if(isupper(dizi[i])){
			dizi[i]+=32;
		}
		else if(islower(dizi[i])){
		
		 dizi[i]-=32;
		 } 
	}
	
	puts(dizi);
	
	return(0);
}
