/*
List of islands using linked List
*/

#include <stdio.h>

typedef struct island {

	//String is used for the name and the opening and closing times
	char *name;
	char *opens;
	char *closes;
	struct island *next;  //Pointer to the next island is stored in the struct
	
} island;

//display function to display the list of the islands

void display (island *start){
	island *i = start;

	for(; i !=NULL; i = i->next){
		printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes );
	}
}

int main(){
	island amity = {"Amity", "09:00", "17:00", NULL};
	island craggy = {"Craggy", "09:00", "17:00", NULL};
	island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
	island shutter  = {"Shutter", "09:00", "17:00", NULL};
	amity.next = &craggy;
	craggy.next = &isla_nublar;
	isla_nublar.next = &shutter;
	island skull = {"Skull", "09:00", "17:00", NULL};
	isla_nublar.next = &skull;
	skull.next = &shutter;
	display(&amity);
}
