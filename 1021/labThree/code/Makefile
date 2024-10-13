COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): Square.cpp Trapezoid.cpp Circle.cpp Rectangle.cpp areaCalc.cpp
	$(COMPILER) $(OPTIONS) Square.cpp Trapezoid.cpp Circle.cpp Rectangle.cpp areaCalc.cpp -o $(PROGRAM)

clean:
	rm *.out
