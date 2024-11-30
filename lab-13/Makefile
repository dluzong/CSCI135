main: main.o recursion.o
	g++ -o main main.o recursion.o

tests: tests.o recursion.o
	g++ -o tests tests.o recursion.o

main.o: main.cpp funcs.h

recursion.o: recursion.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f main.o tests.o recursion.o

