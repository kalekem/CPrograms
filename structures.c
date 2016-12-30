/*
This program  is used to store and access "id, name and percentage" for one of the student
*/

#include <stdio.h>
#include <string.h>

struct student {
	/* data */
	int id;
	char name[20];
	float percentage;
};

int main(){
	struct student record = {0}; //initializing the list to null;

	record.id = 1;
	strcpy(record.name, "Cleo");
	record.percentage = 94.5;

	printf("Id is: %d\n", record.id);
	printf("Name is: %s \n",record.name );
	printf("Percentage is: %.2f\n", record.percentage);

	return 0;
}