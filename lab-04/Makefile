OBJECTS = main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o
main: $(OBJECTS)
	g++ -o main $(OBJECTS)

main.o: main.cpp funcs.h
	g++ -c main.cpp 

box.o: box.cpp funcs.h
	g++ -c box.cpp

checkerboard.o: checkerboard.cpp funcs.h
	g++ -c checkerboard.cpp

cross.o: cross.cpp funcs.h
	g++ -c cross.cpp

lower.o: lower.cpp funcs.h
	g++ -c lower.cpp

upper.o: upper.cpp funcs.h
	g++ -c upper.cpp

trapezoid.o: trapezoid.cpp funcs.h
	g++ -c trapezoid.cpp

checkerboard3x3.o: checkerboard3x3.cpp funcs.h
	g++ -c checkerboard3x3.cpp

clean:
	rm -f main $(OBJECTS)