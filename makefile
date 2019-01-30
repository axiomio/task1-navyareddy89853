sum: main.o
	cc -o sum main.o
main.o : main.c
	cc -c main.c
clean :	
	rm sum main.o
install :
	./sum

