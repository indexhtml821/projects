FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/Main.cpp -o bin/Main.o
	g++ -g -o bin/holamundo bin/Main.o
	
clean:
	rm -Rf bin