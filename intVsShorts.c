
/*There is no problem storing a short variable inside an int or a long variable.
There is plenty of space in memory, and your code will work properly

However the problem start to happen if you go the way around i.e. you try to store an int
into a short

*/

#include <stdio.h>

int main(){
	//storing a short inside an int --- there is NO PROBLEM!!
	short shortNum = 15;
	int intNum = shortNum;
	printf("The value of int = %i\n", intNum);

	//storing an int in a short --- there IS A PROBLEM!!
	int x = 100000;
	short y =x ;
	printf("The value of short = %hi\n", y); //%hi is the proper code to format a short variable


	return 0;


}