#include <stdio.h>


int main(void){
    char kelime[255];
    int i;
    printf("Lutfen bir kelime giriniz\n");
    scanf("%s",&kelime[0]);
    for(i=0;i<255&&kelime[i]!= '\0';i++){
        if(kelime[i]<='z'&&kelime[i]>='a'){
            kelime[i]-=32;
            printf("%c",kelime[i]);
            }
        else if(kelime[i]<='Z'&&kelime[i]>='A')
            printf("%c",kelime[i]);
    }




    return(0);
}