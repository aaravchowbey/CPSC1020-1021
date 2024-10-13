COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp Date.cpp calcDays.cpp
	$(COMPILER) $(OPTIONS) main.cpp square.cpp trapezoid.cpp rectangle.cpp circle.cpp -o $(PROGRAM)

clean:
	rm *.out
