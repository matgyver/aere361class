#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("\nVariables of type char store values from %d to %d\n",CHAR_MIN, CHAR_MAX);
	printf("Variables of type unsigned char store values from 0 to %u\n",UCHAR_MAX);
	printf("Variables of type short store values from %d to %d\n",SHRT_MIN, SHRT_MAX);
	printf("Variables of type unsigned short store values from 0 to %u\n",USHRT_MAX);
	printf("Variables of type int store values from %d to %d\n",INT_MIN, INT_MAX);
	printf("Variables of type unsigned int store values from 0 to %u\n", UINT_MAX);
	printf("Variables of type long store values from %ld to %ld\n",LONG_MIN, LONG_MAX);
	printf("Variables of type unsigned long store values from 0 to %lu\n", ULONG_MAX);
	printf("Variables of type long long store values from %lld to %lld\n",LLONG_MIN, LLONG_MAX);
	printf("Variables of type unsigned long long store values from 0 to %llu\n", ULLONG_MAX);
	
	printf("\n\nThe size of the smallest positive non-zero value of type float is %.3e\n", FLT_MIN);
	printf("The size of the largest value of the type float is %.3e\n",FLT_MAX);
	printf("The size of the smallest non-zero value of the type double is %.3e\n",DBL_MIN);
	printf("The size of the largest value of the type double is %.3e\n",DBL_MAX);
	printf("The size of the smallest non-zero value of the type long double is %.3Le\n", LDBL_MIN);
	printf("The size of the largest value of the type long double is %.3Le\n", LDBL_MAX);
	return 0;
}
