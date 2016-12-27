/*
an array variable can be used as a pointer to the first element in an array
*/
#include <stdio.h>

int main(){

	int drinks[] = {4, 2, 3};
	
	printf("1st order: %i drinks \n", drinks[0] );
	printf("1st order: %i drinks \n", *drinks);

	printf("2nd order: %i drinks \n", drinks[1] );
	printf("1nd order: %i drinks \n", *(drinks + 1));

	printf("3rd order: %i drinks \n", drinks[2] );
	printf("3rd order: %i drinks \n", *(drinks + 2));

	printf("3rd order: %i drinks \n", 2[drinks]);


	return 0;
}