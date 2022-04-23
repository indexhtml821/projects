FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/Main.cpp -o bin/Main.o
	g++ -g -o bin/holamundo bin/Main.o

tests:
	    mkdir -p bin	
		g++ $(FLAGS) test/tests_envios.cpp -o bin/tests_envios.o
		g++ $(FLAGS) src/envios.cpp -o bin/envios.o
		g++ -g -o bin/tests bin/tests_envios.o bin/envio.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin