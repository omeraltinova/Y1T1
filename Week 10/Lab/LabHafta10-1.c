#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void){
	
	int *dizi1; // 3x2
	int *dizi2; // 2x3 ters
	int *dizi3; // 2x2
	int *sonuc; // 2x2 sonuc
	int i,j;
	
	srand(time(NULL));
	
	
	dizi1 = malloc(sizeof(int)*6);
	dizi2 = malloc(sizeof(int)*6);
	dizi3 = malloc(sizeof(int)*4);
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			dizi1[i][j]= rand() % 100;
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\n",dizi1[i][j]);
		}
	}
	
	
	return(0);
	}
