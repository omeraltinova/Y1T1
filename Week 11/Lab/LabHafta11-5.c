#include <stdio.h>
#include <string.h>



int main(void){
	char dizi[50],kr;
	int i;
	
	printf("Dizi giriniz\n");
	gets(dizi);
	printf("hangi karakteri aramak istiyorsunuz\n");
	scanf("%c",&kr);
	
	for(i=0;i<strlen(dizi);i++){
		if(dizi[i]==kr){
			printf("%c karakteri %d. harfte bulunuyor indis: %d\n",kr,i+1,i);
		}
	}
	
	return(0);
}
