/*
This program sorts different functions using the comparator functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//sorts integer scores with the smallest first
int compare_scores(const void* score_a, const void* score_b) {
	int a = *(int*)score_a;
	int b = *(int*)score_b;
	return a - b;
}

//sorts integer scores with the largest first
int compare_scores_desc(const void* score_a, const void* score_b) {
	int a = *(int*)score_a;
	int b = *(int*)score_b;
	return b - a;
}

//the rectangle type
typedef struct {
	int width;
	int height;
} rectangle;

//sorts the rectangles in area order, smallest first
int compare_areas(const void* a, const void* b) {

	//first convert the pointers to the correct type
	rectangle* ra = (rectangle*)a; 
	rectangle* rb = (rectangle*)b;

	//... then calculate the areas
	int area_a = (ra->width * ra->height);
	int area_b = (rb->width * rb->height);

	//...then use subtraction trick
	return area_a - area_b;
}

//sorts a list of names in alphabetical order. Case sensitive
int compare_names(const void* a, const void* b) {

	//A string is a pointer to a char, so the pointers 
	//are the pointers to pointers
	char** sa = (char**)a;
	char** sb = (char**)b;

	//use the * operator to find the actual strings
	return strcmp(*sa, *sb);
}

//sort the rectangles in area order, largest first
int compare_areas_desc(const void* a, const void* b) {

	//you could also use -- compare_areas(a,b)
	return compare_areas(b, a);
}

//sorts a list of names in reverse alphabetical order. Case Sensitive
int compare_names_desc(const void* a, const void* b) {

	//you could have used compare_names(a, b) as well
	return compare_names(b, a);
}

int main() {

	int scores[] = {543,323,32,554,11,3,112};
	int i;

	///this line sorts the scores. qsort() changes the order of the elements in the array
	qsort(scores, 7, sizeof(int), compare_scores_desc);
	puts("These are the scores in order:");

	//this prints out the array once it's been sorted
	for (i = 0; i < 7; i++) {
		printf("Score = %i\n", scores[i]);
	}

	char *names[] = {"Karen", "Mark", "Brett", "Molly"};

	//sorts the names
	//An array of names is just an array of char pointers, size oof each item is sizeof(char*)
	qsort(names, 4, sizeof(char*), compare_names); 

	puts("These are the names in order:");

	for (i = 0; i < 4; i++) {
		printf("%s\n", names[i]);

	}
	return 0;
}