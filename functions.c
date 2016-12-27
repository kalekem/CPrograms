
/*
this program uses functions to compare two numbers

*/

#include <stdio.h>
#include <stdlib.h>

int largest(int a, int b){
	if(a > b)
		return a;
	return b;
}

int main(){
	int greatest = largest(20, 30);
	printf("%i is the greatest!\n", greatest);

	return 0;
}