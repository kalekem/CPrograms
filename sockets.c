/*
The server generates random advice for any client that connects to it */

#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>
#include <errno.h>
#include <unistd.h>
#include <signal.h>

int main (int argc, char *argv[] ){
	char *advice[] = {
		"Take smaller bites \r\n",
		"Go for the tight jeans. No they do NOT make you look fat.\r\n",
		"One word: inappropriate\r\n",
		"Just for today, be honest. Tell your boss what you *really* think\r\n",
		"You might want to rethink that haircut\r\n"
	};

	int listener_d =socket (PF_INET, SOCK_STREAM, 0); //create a socket

	struct sockaddr_in name;
	name.sin_family = PF_INET;
	name.sin_port = (in_port_t)htons(30000);
	name.sin_addr.s_addr = htonl (INADDR_ANY);
	
	//bind the socket to port 30000
	if (bind(listener_d, (struct sockaddr *) &name, sizeof(name) == -1)) 
		error("Can't bind the port");
	


	listen (listener_d, 10); // set the listen queue depth to 10
	puts ("Waiting for connection");

	//Loop the accept/begin section
	while (1) { 
		struct sockaddr_storage client_addr;
		unsigned int address_size = sizeof(client_addr);
		int connect_d = accept(listener_d, (struct sockaddr *) &client_addr, &address_size); //accept the connection
		char *msg = advice[rand() % 5];  

		send (connect_d, msg, strlen(msg), 0); //begin talking to the client
		//close(connect_d); 

	}

	return 0;
}
