#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void degistir(char dizi[],char kr1,char kr2,int tamsayi);

int main(void){
    int dizi[50];
    char kr1,kr2;
    int tamsayi;

    printf("Bir cumle giriniz\n");
    gets(dizi);
    printf("ilk kac harfi degistirmek istiyorsunuz\n");
    scanf("%d",&tamsayi);
    printf("Bu cumlede degistirmek istediginiz harf nedir?\n");
    scanf("%c",&kr1);
    printf("Bu harf yerine ne koymak istiyorsunuz\n");
    scanf("%c",&kr2);

    degistir(dizi,kr1,kr2,tamsayi);





    return(0);

}