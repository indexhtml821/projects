FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/Main.cpp -o bin/Main.o
	g++ -g -o bin/holamundo bin/Main.o

tests:
	    mkdir -p bin	
		g++ $(FLAGS) test/tests_envios.cpp -o bin/tests_envios.o
		g++ $(FLAGS) src/envios.cpp -o bin/envios.o
		g++ $(FLAGS) test/tests_envios_fedex.cpp -o bin/tests_envios_fedex.o
		g++ $(FLAGS) src/enviosFedex.cpp -o bin/enviosFedex.o
		g++ -g -o bin/tests bin/tests_envios.o bin/envios.o bin/tests_envios_fedex.o bin/enviosFedex.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin