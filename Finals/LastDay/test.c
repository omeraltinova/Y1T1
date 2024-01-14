#include <stdio.h>

struct nokta
{
    int x,y,z;
};


void oku(struct nokta* );

int main(void){


    struct nokta nokta1;
    oku(&nokta1);

    printf("x:%dy:%dz:%d",nokta1.x,nokta1.y,nokta1.z);


    return(0);
}


void oku(struct nokta* nokta1){
    printf("x y ve z giriniz\n");
    scanf("%d %d %d",&nokta1->x,&nokta1->y,&nokta1->z);
}