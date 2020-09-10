/* 
AerE 361 Demos for Module 4
Matthew E. Nelson
*/
#include <stdio.h>

int main(void){
	int my_weight = 160;
	int your_weight = 165;
	
	if (your_weight > my_weight)
		printf("You are heavier than me. \n");
		
	if (your_weight < my_weight)
		printf("I am heavier than you.\n");
		
	if (your_weight == my_weight)
		printf("We are exactly the same weight.\n");
		
	return 0;
}
