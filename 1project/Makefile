FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/envios.cpp -o bin/envios.o
	g++ $(FLAGS) src/enviosFedex.cpp -o bin/enviosFedex.o
	g++ $(FLAGS) src/enviosPostales.cpp -o bin/enviosPostales.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ $(FLAGS) src/listaEnvios.cpp -o bin/listaEnvios.o
	g++ -g -o bin/envios bin/main.o bin/envios.o bin/enviosFedex.o bin/enviosPostales.o bin/listaEnvios.o

tests:
	    mkdir -p bin	
		g++ $(FLAGS) test/tests_envios.cpp -o bin/tests_envios.o
		g++ $(FLAGS) src/envios.cpp -o bin/envios.o
		g++ $(FLAGS) test/tests_envios_fedex.cpp -o bin/tests_envios_fedex.o
		g++ $(FLAGS) src/enviosFedex.cpp -o bin/enviosFedex.o
		g++ $(FLAGS) test/tests_envios_postales.cpp -o bin/tests_envios_postales.o
		g++ $(FLAGS) src/enviosPostales.cpp -o bin/enviosPostales.o
		g++ -g -o bin/tests bin/tests_envios.o bin/envios.o bin/tests_envios_fedex.o bin/enviosFedex.o bin/tests_envios_postales.o bin/enviosPostales.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin