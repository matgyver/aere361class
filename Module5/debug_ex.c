/* 
AerE 361 Demos for Module 5
Matthew E. Nelson
That's a bad C program, we don't do that
*/

#include <stdio.h>

int main(void)
{
	int* x;
	int y;
	int z;
	int i;
	x = (&y)+i;
	y=5;
	z=0;
	
	*x = 10;
	
	printf("*x = %d\n y=%d\n z= %d\n",*x,y,z);
	
	return 0;
}
