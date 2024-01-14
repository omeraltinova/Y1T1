#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

    srand(time(NULL));

    int *p, i,min;
    p= (int *) malloc(20*sizeof(int));
    
    for(i=0; i<20; i++){
         *(p+i)=rand()%99+1;
    }
    min=*p;
    for(i=1; i<20; i++){
        printf("%d. sayi : %d\n",i+1,*(p+i));
        if(*(p+i)<min)
        min=*(p+i);
    }
    
    printf("enkucuk sayi %d dir\n", min);
    free(p);
    return 0;
}
