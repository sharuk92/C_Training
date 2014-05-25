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

	if((socket_id = socket(PF_INET, SOCK_STREAM, 0)) == -1)
	{
		fprintf(stderr, "Impossible de creer une socket\n");
		exit(EXIT_FAILURE);
	}

	optval = 1;
	setsockopt(socket_id, SOL_SOCKET, SO_REUSEADDR, &optval, sizeof(int));
	
	sockname.sin_family = host-adress->h_addrType;
	sockname.sin_port   = htons(port);
	memcpy((char*) &(sockname.sin_addr.s_addr), host_address->h_addr, host_address->h_length);
	
	if((connect(socket_id, (struct sockaddr*) &sockname, sizeof(struct sockaddr_in))) == -1)
	{
		fprintf(stderr, "Impossible de connecter la socket au serveur '%s' \n", hostname);
		return -1;
	}

	return (socket_id);
}
