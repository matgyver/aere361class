/* 
AerE 361 Demos for Module 6
Matthew E. Nelson
*/
#include <stdio.h>

int main(void)
{
	int number = 0;
	int *pnumber = NULL;
	
	number = 10;
	printf("Number's address: %p\n",&number);
	printf("Number's value: %d\n\n",number);
	
	pnumber = &number;
	
	printf("Pnumber's address %p\n",(void*)&number);
	printf("Pnumber's size %zd bytes\n",sizeof(pnumber));
	printf("Pnumber's value %p\n",pnumber);
	printf("Value pointed to: %d\n",*pnumber);
	
	return 0;
	
}
