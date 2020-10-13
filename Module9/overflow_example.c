/* AerE 361
IEEE 754 Demo
Matthew E. Nelson
*/

#include <stdio.h>

void printBinary(int n, int i)
{

    // Prints the binary representation
    // of a number n up to i-bits.
    int k;
    for (k = i - 1; k >= 0; k--) {

        if ((n >> k) & 1)
            printf("1");
        else
            printf("0");
    }
}

int main()
{
    __uint8_t test_integer = 255;

    printf("\n\n=========Overflow============\n");
    __uint8_t int_A = 0b11111111;
    __uint8_t int_B = 0x00000001;
    __uint8_t int_C = int_A + int_B;
    printf("%d + %d = %d \n\n",int_A, int_B, int_C);
    printf("In binary this is...\n");
    printf(" ");
    printBinary(int_A,sizeof(int_A)*8);
    printf("\n+");

    printBinary(int_B,sizeof(int_B)*8);
    printf("\n---------------\n");
    printf(" ");
    printBinary(int_C,sizeof(int_C)*8);
    printf("\n \nNow, try this with signed integers.\n");
    __int8_t int_D = 0b01111111;
    __int8_t int_E = 0x00000001;
    __int8_t int_F = int_D + int_E;
    printf("%d + %d = %d \n\n",int_D, int_E, int_F);
    printf("Again in binary this is...\n");
    printf(" ");
    printBinary(int_D,sizeof(int_D)*8);
    printf("\n+");

    printBinary(int_E,sizeof(int_E)*8);
    printf("\n---------------\n");
    printf(" ");
    printBinary(int_F,sizeof(int_F)*8);

    return 0;
} 
