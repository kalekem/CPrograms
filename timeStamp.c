/*This program writes timestamped text to the end of a logfile
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *now() {
	time_t t;
	time (&t);
	return asctime(localtime (&t));
}

/*Master Control program utility. Records guard patrol check-ins. */

int main() {
	char comment [80];
	char cmd [120];

	/*the text is stored in the comment array
	There is a room for only 80 characters
	and the data will come from the Standard Input - the  Keyboard */

	fgets (comment, 80, stdin); //using fgets for unstructured text
	/*sprintf will print the characters to a string and the formatted array will be 
	stored in the cmd array and appended to a file */
	sprintf(cmd, "echo '%s %s' >> reports.log", comment, now()); 

	system(cmd); // runs the contents of the cmd string, with the comment appearing first then the timestamp appearing second


}