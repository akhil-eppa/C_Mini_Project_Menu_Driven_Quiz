a.out: client.o server.o
	gcc client.o server.o
client.o: client.c inter.h
	gcc -c client.c
server.o: server.c inter.h
	gcc -c server.c
