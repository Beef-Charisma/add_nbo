all : add_nbo

add_nbo: main.o
	g++ -g -o add_nbo main.o

main.o:
	g++ -g -c -o main.o main.cpp

clean:
	rm -f add_nbo
	rm -f *.o
