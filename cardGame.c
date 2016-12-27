/*
Program to evaluate face values 

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char card_name[3];
	puts("Enter the card_name: ");
	scanf("%15s", card_name);

	int val = 0;


	switch (card_name[0]){

		case 'K':
		case 'J':
		case 'Q':
			val = 10;
			break;

		case 'A':
			val = 11;
			break;

		case 3:
		case 4:
		case 5:
		case 6:
			puts("Count has gone up!");
			break;

		case 10:
			puts("Count has gone up!");
			break;

		default:
			val = atoi(card_name);

		//return 0;
	}

	
	/**
	if(card_name[0] == 'K'){
		val = 10;
	}
	else if(card_name[0] == 'Q') {
		val = 10;

	}
	else if(card_name[0] == 'J'){
		val = 10;
	}
	else if( card_name[0] == 'A'){
		val = 11;
	}
	else {
		val = atoi(card_name);

	}

	
	//check if the value is 3 to 6 
	if(val > 2 && val <7)
		puts("Count has gone up!");

	//otherwise check if the card was 10, J, Q, or K 
	else if (val == 10)
		puts("Count has gone down!");
	//printf("The card value is : %i\n", val );
*/
	return 0;
}