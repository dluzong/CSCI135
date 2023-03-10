main: main.o caesar.o
	g++ -o main main.o caesar.o

tests: tests.o caesar.o
	g++ -o tests tests.o caesar.o



caesar.o: caesar.cpp caesar.h
	g++ -c caesar.cpp

main.o: main.cpp caesar.h
	g++ -c main.cpp

tests.o: tests.cpp doctest.h caesar.h
	g++ -c tests.cpp 

clean:
	rm -f main.o caesar.o tests.o
