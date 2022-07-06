FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/movimientos.cpp -o bin/movimientos.o
	g++ $(FLAGS) src/deposito.cpp -o bin/deposito.o
	g++ $(FLAGS) src/retiro.cpp -o bin/retiro.o
	g++ $(FLAGS) src/cuentaAhorros.cpp -o bin/cuentaAhorros.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/ahorros bin/main.o  bin/deposito.o bin/retiro.o bin/cuentaAhorros.o bin/movimientos.o

	
clean:
	rm -Rf bin