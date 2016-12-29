/*
This program encrypts text messages
*/
#include <stdio.h>
#include "encrypt.h"  //encrypt is included so that the program has the declaration of the ecrypt function

int main(){
	char msg[80];
	while(fgets(msg, 80, stdin)){
		encrypt(msg);
		printf("%s\n", msg);
	}
}

