all : client server
client :
	gcc -o client client.c
	./client 127.0.0.1 6022
server : 
	gcc -o server server.o
	./server 6022
