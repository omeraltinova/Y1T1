#include <stdio.h>
#include <string.h>


int main(void){
	char dizi[50];
	int bosluk=0,i;
	
	printf("Dizi giriniz\n");
	gets(dizi);
	
	for(i=0;i<strlen(dizi);i++){
		if(dizi[i]==' '){
			bosluk++;
		}
	}
	
	printf("Bu dizide %d adet kelime bulunuyor\n",bosluk+1);
	
	
	
	return(0);
}
