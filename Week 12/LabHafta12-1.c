#include <stdio.h>

typedef struct{
	char isim[25];
	int sehirno;
	int yas;
}Kisi;


int main(void){
	
	Kisi kisi1={"Faruk",34,18};
	Kisi kisi2={"Semih",35,17};
	
	printf("%s %d %d\n",kisi1.isim,kisi1.sehirno,kisi1.yas);
	printf("%s %d %d\n",kisi2.isim,kisi2.sehirno,kisi2.yas);
	
	
	
	return(0);
}
