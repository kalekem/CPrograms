/*simple math problem */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculate(int a, int b){
	int product = a * b;
	printf("The product of %i and %i = %i\n", a, b, product);
}
int main (){
	calculate(6, 8);

return 0;

}
/*
void calculate(int a, int b) {
	puts(a*b);
	//printf("The sum of %i and %i = " + a*b +" \n", a, b);
}
*/