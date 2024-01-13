#include <stdio.h>
#include <string.h>

int main()
{
   char cars[][10] = {"Mustang","Corvette","Camaro"};

   //cars[0] = "Tesla";
   strcpy(cars[2], "Tesla");
   int size=sizeof(cars)/sizeof(cars[0]);
   for(int i = 0; i<size; i++)
   {
      printf("%s\n", cars[i]);
   }

   return 0;
}