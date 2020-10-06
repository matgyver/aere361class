#include <stdio.h>
#include <mymath.h>
#include "help.h"

void main()
{
char n;
int x=10, y=20;

printf("Hello World");
printf("\n%d + %d = %d",x,y,add(x,y));
printf("\n%d - %d = %d",x,y,sub(x,y));
printf("\nType h to invoke help");
scanf("%c",&n);
printf("\n");

if (n=='h')
{
help();
}

}
