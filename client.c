#include "pipe_networking.h"


int main() {

  int to_server;
  int from_server;

  from_server = client_handshake( &to_server );

  char data[BUFFER_SIZE];

  while(1) {
  	printf("Enter data: ");
  	fgets(data, BUFFER_SIZE, stdin);
  	write(to_server, data, BUFFER_SIZE);
  	printf("client sent data: \"%s\"\n", data);
  }
}
