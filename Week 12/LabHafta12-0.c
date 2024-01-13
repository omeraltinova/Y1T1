#include <stdio.h>



int main(void){
	
	enum Days  {Mon=1,Tue=2,Wed=3,Thu=4,Fri=5,Sat=6,Sun=7};
	
	enum Days day;
	day=Sun;
	
	if(day==Sat||day==Sun){
		printf("It's weekend\n");
	}
	else{
		printf("It's worktime :(\n");
	}
	
	
	
	
	
	return(0);
}
