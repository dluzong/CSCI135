main: main.o time.o
	g++ -o main main.o time.o

tests: tests.o time.o
	g++ -o tests tests.o time.o

main.o: main.cpp time.h movie.h timeslot.h

time.o: time.cpp time.h movie.h timeslot.h

tests.o: tests.cpp

clean: 
	rm -f main.o tests.o time.o