/*
opens up a web page in Windows, Linux and Mac opens*/

#include <stdio.h>
#include <stdlib.h>

void open_url (char *url) {
	//opens the web page in windows
	char launch[255];
	sprintf(launch, "start %s", url);
	system(launch);

	//opens the web page on Linux
	sprintf(launch, "x-www-browser '%s' &", url);
	system(launch);
	sprintf(launch, "open '%s'", url);
	system(launch);
}

int main() {
	open_url("https://kalekem.github.io");
}