/*
test program to see if the ecryption functions work
*/

/*NOTE: If you use the angle brackets in an #include statement, the compiler
won't look for the headers in the current directory; instead it will search for them
in the standard header directories */


//encrypt.h and checksum.h are in the same directory as the program
#include <stdio.h> //this is stored in one of the standard header directories
#include "encrypt.h" 
#include "checksum.h"

int main () {
	char s[] = "This is a test for encryption - for data security!";
	encrypt(s);
	printf("Encrypted to '%s'\n", s);
	printf("Checksum is %i\n", checksum(s));
	encrypt(s);
	printf("Decrypted back to '%s'\n", s);
	printf("Checksum is %i\n", checksum);
	return 0;
}