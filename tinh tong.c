/* Fig. 2.5: fig02_05.c addition program */

#include<stdio.h>

/* function main begins program execution */

int main()
{
	int X; /* first number to be input by user */
	int Y; /* second number to be input by user */
	int sum; /* variable in which sum will be stored */
	
	printf( "Enter first integer\n" ); /* prompt */
	scanf( "%d", &X ); /* read an integer */
	
	printf( "Enter second integer\n" ); /* prompt */
	scanf( "%d", &Y ); /* read an integer */
	
	sum= X + Y; /* assign total to sum */
	
	printf( "Sum is %d\n", sum ); /* indicate that program ended successfull */
	return 0;
} /* end function main */

