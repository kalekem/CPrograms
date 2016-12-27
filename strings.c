/*
Using stdlib to find strings inside other strings
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char s0[] = "dysfunctional";
	char s1[] = "funu";

	if(strstr(s0, s1))
		puts("I found the 'fun' in dysfunctional!");
	else
		puts("I didn't find 'funu' in dysfunctional!");


	return 0;
	
}