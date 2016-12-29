/*This program helps the waiters bus tables at the Head First Filter.
The code automatically totals a bill and adds sales tax to each item.

NOTE: USE OF DATA TYPES i.e float, int and short
*/

#include <stdio.h>
#include "add_with_tax.h"
//global variables
float total = 0.0; //You need a small floating-point number to total the cash
short count = 0;  //there wont be many items on an order so we'll use a short
short tax_percent =6;


int main(){
	float value; //Each price will easily fit in a float
	printf("Price of item: ");
	while (scanf("%f", &value) == 1) {
		printf("Total so far: %.2f\n", add_with_tax(value));
		printf("Price of item: ");

	}

	printf("\nFinal total: %.2f\n", total);
	printf("Number of items: %hi\n", count );

	return 0;
}

//we're returning a small cash value, so it will be a float
float add_with_tax(float totalCash){ 
	float tax_rate = 1 + tax_percent/100.0; //adding 0 makes the calculation work as a float
	total = total + (totalCash *tax_rate);
	count = count + 1;
	return total;
}