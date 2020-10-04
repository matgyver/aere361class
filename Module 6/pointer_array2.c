/* 
AerE 361 Demos for Module 5
Matthew E. Nelson
*/
#define __STDC__WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <string.h>

int main(void)
{
	char multiple[] = "a passable demo string";
	char *p = multiple;
	
	for(int i=0;i<strnlen(multiple,sizeof(multiple)); ++i)
		printf("multiple [%d] = %c  *(p%d) = %c  &multiple[%d] = %p  p+%d = %p\n",i,multiple[i],i,*(p+i),i,p+i);
	return 0;
}
