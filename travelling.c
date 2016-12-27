/*
using pointers to update locations on a map
*/

#include <stdio.h>
#include <stdlib.h>

void go_south_east(int *lat, int * lon){

	//*stores the pointers
	//while (*lat > 0 && *lon < 0)
		*lat = *lat - 1 ;
		*lon = *lon + 1 ;

}

void fortune_cookie(char msg[]){
	printf("Message reads : %s\n", msg);
	printf("Message occupies %i bytes \n", sizeof(msg));

}
int main(){
	int latitude = 32; 
	int longitude = -64;

	//use & to find the address of the latitudes and longitudes
	go_south_east(&latitude, &longitude);
	printf("Avast! Now at: [%i, %i]\n", latitude,longitude );

	char quote[] = "Cookies make you fat!";
	fortune_cookie(quote);

	return 0;
}