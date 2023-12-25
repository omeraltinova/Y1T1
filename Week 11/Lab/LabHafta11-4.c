#include <stdio.h>
#include <string.h>



int main(void){
	char dizi1[30],dizi2[30],dizi3[30];
	int i,flag;
	printf("1. diziyi giriniz\n");
	gets(dizi1);
	printf("2. diziyi giriniz\n");
	gets(dizi2);
	printf("3. diziyi giriniz\n");
	gets(dizi3);
	strcat(dizi1,dizi2);
	flag=strcmp(dizi1,dizi3);
	
	if(flag==0){
		printf("Diziler aynidir");
	}
	else 
		printf("diziler ayni degildir");
/*	for(i=0;i<strlen(dizi3);i++){
		if(dizi1[i]==dizi3[i]){
			flag=1;
		}
		else{
			flag=0;
		}
	}
	
	if(flag){
		printf("Diziler aynidir\n");
	}
	else {
		printf("diziler ayni degildir\n");
	} */

	return(0);
}
