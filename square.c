
/*
Calculates the square of numbers
*/

#include <stdio.h>

int total;

//returns the square of the number
int square (int x){
	return x*x;

}

//returns the square of the sum of two numbers
int squareOfSum(int x, int y){
	int z = square(x+y);
	return z;
}

int main(){
	int a = 4,b = 8;
	total = squareOfSum(a,b);
	printf("The square of the sum of %d and %d is = %d", a, b, total);
}