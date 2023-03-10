main: main.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o caesar.o vigenere.o decrypt.o

tests: tests.o caesar.o vigenere.o decrypt.o
	g++ -o tests tests.o caesar.o vigenere.o decrypt.o



caesar.o: caesar.cpp caesar.h
	g++ -c caesar.cpp

vigenere.o: vigenere.cpp vigenere.h
	g++ -c vigenere.cpp

decrypt.o: decrypt.cpp decrypt.h
	g++ -c decrypt.cpp

main.o: main.cpp caesar.h vigenere.h decrypt.h
	g++ -c main.cpp

tests.o: tests.cpp doctest.h caesar.h vigenere.h decrypt.h
	g++ -c tests.cpp 

clean:
	rm -f main.o caesar.o vigenere.o decrypt.o tests.o
