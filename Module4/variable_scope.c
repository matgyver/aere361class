/*
AerE 361 Demos for Module 4
Matthew E. Nelson
*/
#include <stdio.h>

int main(void)
{
	int count1 = 1;  //Declare in outer block
	//int count2 = 1;
	do
	{
		int count2;  //Declare in inner block
		++count2;
		printf("count1 = %d    count2 = %d\n",count1,count2);
	}
	while( ++count1 <= 5);
	printf("count1 = %d\n",count1);
	return 0;
}
