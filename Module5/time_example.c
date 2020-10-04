/* 
AerE 361 Demos for Module 5
Matthew E. Nelson
*/

#include <stdio.h>
#include <time.h>
#include <unistd.h>

// main function to find the execution time of a C program
int main()
{
	// to store execution time of code
	double time_spent = 0.0;

	clock_t begin = clock();

	// do some stuff here
	sleep(3);

	clock_t end = clock();

	// calculate elapsed time by finding difference (end - begin) and
	// dividing the difference by CLOCKS_PER_SEC to convert to seconds
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

	printf("Time elpased is %f seconds", time_spent);

	return 0;
}
