/* 
AerE 361 Demos for Module 4
Matthew E. Nelson
*/
#include <stdio.h>

int main(void){  
	int age;     
	printf( "Please enter your age: " );
	scanf( "%d", &age );                     
	if ( age > 40 && age < 50 )
    	printf( "You are between age 40 and 50.\n" );
   
    if ( age < 100 ) {                  
        printf ("You are pretty young!\n" ); 
    }
    else if ( age == 100 ) {            
        printf( "You are old\n" );       
    }
    else {
        printf( "You are really old\n" );     
    }
}
