#include <stdio.h>

int main(void)
{
	int count1 = 1;  //Declare in outer block
	int count2 = 10;
	
	do
	{
		int count2;  //Declare in inner block
		++count2;
		printf("in the loop count2 = %d\n",count1,count2);
	}
	while( ++count1 <= 5);
	printf("count1 = %d   count2 = %d\n",count1,count2);
	
	return 0;
}