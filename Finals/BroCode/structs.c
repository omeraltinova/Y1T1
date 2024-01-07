#include <stdio.h>
#include <string.h>
struct player{
    char name[12];
    int score;

};



int main(void){

    struct player player1;
    struct player player2;

    strcpy(player1.name,"Bro");
    player1.score= 4;
    strcpy(player2.name,"Bra");
    player2.score= 5;

    printf("%s\n",player1.name);
    printf("%d\n",player1.score);
    printf("%s\n",player2.name);
    printf("%d\n",player2.score);
    return(0);
}