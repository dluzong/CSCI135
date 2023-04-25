main: main.o profile.o network.o
	g++ -o main main.o profile.o network.o --std=c++11

tests: tests.o profile.o network.o
	g++ -o tests test.o profile.o network.o --std=c++11


main.o: main.cpp profile.h network.h

profile.o: profile.cpp profile.h

network.o: network.cpp network.h

tests.o: tests.cpp

clean:
	rm -f main.o tests.o profile.o network.o