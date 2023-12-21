#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void){
	
	int dizi1[10][2];
	int dizi2[10];
	int i,j,k;
	srand(time(NULL));
			
	for(i=0;i<10;i++){
		for(j=0;j<2;j++){
			dizi1[i][j]= rand() % 1000;
		}
	}	
	
	i=0;j=0;
	for(k=0;k<10;k++){
		for(j=0;j<2;j++){
			
		}
	}
	
	for(i=0;i<10;i++){
		printf("%d. satir carpimi %d\n",i+1,dizi2[i]);
	}
	
	
	
	
	return(0);
	}
