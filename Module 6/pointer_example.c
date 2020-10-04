/* 
AerE 361 Demos for Module 6
Matthew E. Nelson
*/
#include <stdio.h>

int main(void)
{
	//A variable of type int initialized to 0
	int number = 0;
	//A pointer that can point to type int
	int *pnumber = NULL;
	
	number = 10;
	//Output of the address
	printf("Number's address: %p\n",&number);
	//Output of the number
	printf("Number's value: %d\n\n",number);
	
	//Store the address of number in pnumber
	pnumber = &number;
	
	//Output the address
	printf("Pnumber's address %p\n",(void*)&number);
	//Output the size
	printf("Pnumber's size %zd bytes\n",sizeof(pnumber));
	//Output the value (the address)
	printf("Pnumber's value %p\n",pnumber);
	//Value at the address 
	printf("Value pointed to: %d\n",*pnumber);
	
	return 0;
	
}
