COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): Date.cpp calcDays.cpp main.cpp
	$(COMPILER) $(OPTIONS) Date.cpp calcDays.cpp main.cpp -o $(PROGRAM)

clean:
	rm *.out

