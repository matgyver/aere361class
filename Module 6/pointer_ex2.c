/* 
AerE 361 Demos for Module 6
Matthew E. Nelson
*/
//What's the pointer of it all

#include <stdio.h>

int main(void)
{
	long num1 = 0L;
	long num2 = 0L;
	long *pnum = NULL;
	
	// Get addres of num1
	pnum = &num1;
	//Set num1 to num2
	*pnum = 2L;
	//Increment num2
	++num2;
	//Add num1 and num2
	num2 += *pnum;
	//Get address of num2
	pnum = &num2;
	//increment num2 indirectly 
	++*pnum;
	
	printf("num1 = %ld  num2 = %ld  *pnum = %ld  *pnum+num2 = %ld\n",num1,num2,*pnum,*pnum+num2);
	
	return 0;
	
}
