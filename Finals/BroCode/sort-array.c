#include <stdio.h>
#include <string.h>

void sort(char array[],int size){

    for(int i=0;i<size-1;i++){
        for(int j=0;j<size;j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

}
void printArray(char array[],int size){
    for(int i=0;i<size;i++){
        printf(" %c ",array[i]);
    }
}

int main(void){

    //int array[] = {1,5,7,9,5,2,6,4};
    char array[]= {'A','F','C','Z','B'};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array,size);
    printArray(array,size);

    return(0);
}