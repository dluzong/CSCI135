main: main.o box.o
	g++ -o main main.o box.o

main.o: main.cpp funcs.h
	g++ -c main.cpp 

box.o: box.cpp funcs.h
	g++ -c box.cpp

clean:
	rm -f main.o box.o