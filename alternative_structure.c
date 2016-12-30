/*
In this program, structure variable "record" is declared while declaring structure itself
*/

#include <stdio.h>
#include <string.h>

struct student {
	/* data */
	int id;
	char name[20];
	float percentage;
	char school[20];
	char major[20];
	char minor[20];

} record;

int main(){
	record.id = 5488 ;
	strcpy (record.name , " CLEOPHAS KALEKEM");
	strcpy(record.school, "BRANDEIS UNIVERSITY");
	strcpy(record.major ,"Computer Science & Economics");
	strcpy(record.minor, "Business");
	record.percentage = 97.8;

	printf("Id is: %d\n",record.id );
	printf("Name is: %s\n", record.name);
	printf("School is: %s\n",record.school );
	printf("Major is: %s\n", record.major );
	printf("Minor is: %s\n", record.minor);
	printf("Percentage is: %.2f\n", record.percentage);

	return 0;
}