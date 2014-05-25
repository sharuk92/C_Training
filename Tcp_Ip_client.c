#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>


int create_tcp_client(const char* hostname, int port)
{
	struct hostent* host_address;
	struct sockaddr_in sockname;
	int optval;
	int socket_id;

	if((host_adress = gethostbyname(hostname)) == NULL)	
	{
		fprintf(stderr, "Impossible d'identifier l'adresse de la machine '%s' \n", hostname);
		return -1;
	}


}
