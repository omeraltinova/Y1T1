#include <stdio.h>
#include <string.h>
union isciler{
	int maas;
	int numara;
};

int main(void){
	
	union isciler isci1,isci2;
	
	printf("isci1 numarasi ve maasini giriniz\n");
	scanf("%d %d",&isci1.numara,&isci1.maas);
	printf("isci2 numarasi ve maasini giriniz\n");
	scanf("%d %d",&isci2.numara,&isci2.maas);
	
	printf("isci1 maas: %d\t",isci1.maas);
	printf("isci1 no: %d\n",isci1.numara);
	printf("isci2 maas: %d\t",isci2.maas);
	printf("isci2 no: %d",isci2.numara);
	
	
	
	
	return(0);
}
