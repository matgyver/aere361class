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

typedef union {

    float f;
    struct
    {

        // Order is important.
        // Here the members of the union data structure
        // use the same memory (32 bits).
        // The ordering is taken
        // from the LSB to the MSB.
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;

    } raw;
} myfloat;

// Function to convert real value
// to IEEE foating point representation
void printIEEE(myfloat var)
{

    // Prints the IEEE 754 representation
    // of a float value (32 bits)

    printf("%d | ", var.raw.sign);
    printBinary(var.raw.exponent, 8);
    printf(" | ");
    printBinary(var.raw.mantissa, 23);
    printf("\n");
}

// Main Function
int main()
{
    // Instantiate the union
    myfloat var;

    // Get the real value
    var.f = 85.125;

    printf("\n\n=========IEEE 754 Representation=========\n");
    // Get the IEEE floating point representation
    printf("IEEE 754 representation of is : %f \n",
        var.f);
    printf("SB|Exponent  |Mantissa\n");
    printIEEE(var);

    return 0;
} 
