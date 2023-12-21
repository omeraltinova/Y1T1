#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(void){
        struct ogrenci{
        char ad[25];
        int yas;
        float boy;

};

    struct ogrenci burak= {"Burak",20,1.73};


    printf("adi %s\n yas %d\n boy %.2f",burak.ad,burak.yas,burak.boy);
    
}





