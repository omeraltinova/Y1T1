#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(){
	srand(time(NULL));
	int satirA=3,sutunA=2;
	int i,j;
	int **A= malloc(satirA * sizeof(int));
	for(i=0;i<satirA;i++){
		A[i]=malloc(sizeof(int)*sutunA);
		for(j=0;j<sutunA;j++){
			A[i][j]= rand() %10+1;
		}
	}
	
	for(i=0;i<satirA;i++){
		for(j=0;j<sutunA;j++){
			printf("A %d %d : %d\n",i,j,A[i][j]);
		}
	}
		printf("----------------------\n");
		
	int satirB=2,sutunB=2;
	int **B= malloc(satirB * sizeof(int));
	for(i=0;i<satirB;i++){
		B[i]=malloc(sizeof(int)*sutunB);
		for(j=0;j<sutunB;j++){
			B[i][j]= rand() %10+1;
		}
	}
	
	for(i=0;i<satirB;i++){
		for(j=0;j<sutunB;j++){
			printf("B %d %d : %d\n",i,j,B[i][j]);
		}
	}
	int satirC=3,sutunC=2;
	int **C= malloc(sizeof(int)*satirC);
		for(i=0;i<satirC;i++){
			C[i]=malloc(sizeof(int)*sutunC);
			for(j=0;j<sutunC;j++){
				C[i][j]=0;
			}
		}
		
		int k;
		for(i=0;i<satirA;i++){
			for(j=0;j<sutunB;j++){
				C[i][j]=0;
				for(k=0;k<sutunA;k++){
					C[i][j]=A[i][k]*B[i][k];
				}
			}
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		printf("----------------------\n");
	for(i=0;i<satirC;i++){
		for(j=0;j<sutunC;j++){
			printf("%d\n",C[i][j]);
		}
	}
		return(0);
		
}
