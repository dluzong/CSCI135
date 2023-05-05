main: main.o
	g++ -o main main.o vectors.o optimism.o fusion.o pairwise.o

tests: tests.o
	g++ -o tests tests.o vectors.o optimism.o fusion.o pairwise.o

main.o: main.cpp funcs.h

vectors.o: vectors.cpp funcs.h
optimism.o: optimism.cpp funcs.h
fusion.o: fusion.cpp funcs.h
pairwise.o: pairwise.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h

clean: 
	rm -f main.o tests.o vectors.o optimism.o fusion.o pairwise.o