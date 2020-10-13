/* AerE 361
IEEE 754 Demo
Matthew E. Nelson
*/

#include <stdio.h>

int main()
{

    printf("\n\n=========Floating Point Math=========\n");
    float f_A = 0.1;
    float f_B = 0.2;

    printf("%0.8f + %0.8f = %0.8f\n",f_A,f_A,f_A + f_A);
    printf("So far so good, but...\n");

    printf("%0.8f + %0.8f = %0.8f\n",f_A,f_B,f_A + f_B);
    printf("Let's expand the number of digits...\n");
    printf("%0.10f + %0.10f = %0.10f\n",f_A,f_B,f_A + f_B);
    printf("In fact, looking at the first problem...\n");
    printf("%0.10f + %0.10f = %0.10f\n",f_A,f_A,f_A + f_A);

    return 0;
}
