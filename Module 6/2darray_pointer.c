/* 
AerE 361 Demos for Module 5
Matthew E. Nelson
*/

//Two dimensional arrays and pointers

#include <stdio.h>

int main(void)
{
	char board[3][3] = {
						{'1','2','3'},
						{'4','5','6'},
						{'7','8','9'}
						};
	
	printf("Address of the board is      : %p\n",&board);
	printf("Adress of the board[0][0] is : %p\n",&board[0][0]);
	printf("Value of board[0]            : %p\n",board[0]);
	
	printf("Value of the board[0][0] is  : %c\n",board[0][0]);
	printf("Value of *board[0]           : %c\n",*board[0]);
	printf("Value of **board             : %c\n\n",**board);
	printf("Value of 3rd element         : %c\n",*(*board+2));
	
	//List all elements of the array
	for(int i=0;i<9;++i)
		printf("board[%d]: %c\n",i,*(*board + i));
	
	return 0;
}
