/*
a program to search song tracks in an album
*/

#include <stdio.h> 
#include <string.h> //this will enable you to search with strstr() function

//track arrays set outside the main() and find_track() functions so that they can be usable everywhere in the program
char tracks[][80] = {
	"I left my heart in Harvard Med School",
	"Newark, Newark - a wonderful town",
	"Dancing with a Dork",
	"From here to maternity",
	"The girl from Two Jima"
};

//the new find_track function. Declared before the main function
void find_track(char search_for[]){
	int i;
	for ( i =0; i<5; i++){  // i++ means "increase the value of i by 1"
		if(strstr(tracks[i], search_for))  //the code will display all the matching tracks
			printf("Track %i: %s\n", i, tracks[i]);
		
	}
}

//the main function is the starting point of the program
int main(){
	char search_for [80];
	printf("Search for: "); //enter the search text here
	fgets(search_for, 80, stdin);
	find_track(search_for); //calls the new find_track function and display the matching tracks

	return 0;
}