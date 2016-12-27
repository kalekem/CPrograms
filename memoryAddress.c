/*
locates the memory address of a variable
*/

#include <stdio.h>
#include <stdlib.h>


//A variable declared inside a function is usually stored in a stack
int y = 1;

int main(){

	
	int x = 4;  //a variable declared outside a function is usually stored in the globals

	int *x_address = &x;

	printf("x = %i is stored in address %p\n", x, &x ); //%p is used to format address; %i is used to format integers
	printf("y = %i is stored in address %p\n", y,  &y ); //%p is used to format addres; %i is used to format integers
	printf(*_address); 
	return 0;
}