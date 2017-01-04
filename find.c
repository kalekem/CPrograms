/*
This program filters down a string of arrays 
displaying some strings and not displaying others 

*/

#include <stdio.h>
#include <string.h>

int NUM_ADS = 7;

char *ADS[] = {
	 "William: SBM GSOH likes sports, TV, dining",
	 "Matt: SWM NS likes art, movies, theater",
	 "Luis: SLM ND likes books, theater, art",
	 "Mike: DWM DS likes trucks, sports and bieber",
	 "Peter: SAM likes chess, working out and art",
	 "Josh: SJM likes sports, movies and theater",
	 "Jed: DBM likes theater, books and dining"
};

//someone who likes sports but not bieber
int sports_no_bieber (char *s) {
	return strstr (s, "sports") && !strstr (s, "bieber");
}

//find someone who likes sports or working out
int sports_or_workout (char *s) {

	return strstr(s, "sports") || strstr (s, "working out");

}

//find a non-smoker who likes theatre
int ns_theatre (char *s) {
	return strstr (s, "NS") && strstr (s, "theatre");
}

//find someone who likes the arts, theatre, or dining
int arts_theatre_or_dining (char *s) {
	return strstr (s, "arts") || strstr (s, "theatre") || strstr (s, "dining");
}
 
void find(int (*match)(char*)) {
	int i;

	puts ("Search results: ");
	puts ("----------------------------------");

	for (i =0; i< NUM_ADS; i++) {
		if (match(ADS[i])) {
			printf("%s\n", ADS[i]);
		}
	}

	puts ("-----------------------------------");
}

//main function
int main(){
	/*
	Each call to the find() function is performing a very
	different search. That’s why function pointers are one of the
	most powerful features in C: they allow you to mix functions
	together. Function pointers let you build programs with a lot
	more power and a lot less code.*/
	
	find(sports_no_bieber);
	find(sports_or_workout);
	find(ns_theatre);
	find(arts_theatre_or_dining);

	return 0;
}