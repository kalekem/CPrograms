/*
XOR encryption is a very simple way of disguising a piece of text by XOR-ing 
each character with some value. Not VERY SECURE, BUT it's very easy to do
*/

#include "encrypt.h"

void encrypt(char *message){  //void means can't return anything. *message - passes a pointer to an array function
	char c;

	//loop through the array and update each character with an ecrypted version
	while(*message) {
		*message = *message ^ 31; //This means you'll XOR each character with the number 31
		message++;
	}
}