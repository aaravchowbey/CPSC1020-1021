COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): Patient.cpp hospitalCharges.cpp
	$(COMPILER) $(OPTIONS) Patient.cpp hospitalCharges.cpp -o $(PROGRAM)

clean:
	rm *.out
