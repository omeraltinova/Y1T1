#include <stdio.h>


struct student
{
    char name[25];
    float gpa;
};


int main(void){
    
    struct student student1= {"Spongebob",3.5};
    struct student student2= {"Patrick",3.7};
    struct student student3= {"sandy",3.6};
    struct student student4= {"Squidward",3.3};

    struct student students[] = {student1,student2,student3,student4};
    
    int number=sizeof(students)/sizeof(students[0]);
    for(int i=0;i<number;i++){
        printf("%-12s ",students[i].name);
        printf("%.2f\n",students[i].gpa);
    }


    return(0);
}