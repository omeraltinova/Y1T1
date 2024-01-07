#include <stdio.h>
#include <string.h>

//typedef char user[25];

typedef struct
{
    char name[25];
    char password[12];
    int id;
}user;

int main(void){

user user1 = {"Bro","password",1};
user user2 = {"Bro","password",2};


   printf("%s\n", user1.name);
   printf("%s\n", user1.password);
   printf("%d\n", user1.id);
   printf("\n");
   printf("%s\n", user2.name);
   printf("%s\n", user2.password);
   printf("%d\n", user2.id);


    return(0);
}