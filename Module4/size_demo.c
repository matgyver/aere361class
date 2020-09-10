/*
AerE 361 Demos for Module 4
Matthew E. Nelson
*/
#include <stdio.h>

int main(void)
{
	printf("\nVariables of type char occupy %lu bytes\n",sizeof(char));
	printf("\nVariables of type short occupy %lu bytes\n",sizeof(short));
	printf("\nVariables of type int occupy %lu bytes\n",sizeof(int));
	printf("\nVariables of type long occupy %lu bytes\n",sizeof(long));
	printf("\nVariables of type long long occupy %lu bytes\n",sizeof(long long));
	printf("\nVariables of type float occupy %lu bytes\n",sizeof(float));
	printf("\nVariables of type double occupy %lu bytes\n",sizeof(double));
	printf("\nVariables of type long double occupy %lu bytes\n",sizeof(long double));
	return 0;
}
