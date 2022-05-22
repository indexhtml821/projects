FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/empleado.cpp -o bin/empleado.o
	g++ $(FLAGS) src/empleadoNomina.cpp -o bin/empleadoNomina.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/planilla  bin/empleadoHoras.o  bin/empleadoNomina.o  bin/main.o bin/empleado.o

test:
	    mkdir -p bin
		g++ $(FLAGS) src/empleado.cpp -o bin/empleado.o
		g++ $(FLAGS) tests/tests_empleado_nomina.cpp -o bin/tests_empleado_nomina.o
		g++ $(FLAGS) src/empleadoNomina.cpp -o bin/empleadoNomina.o
		g++ -g -o bin/tests bin/empleado.o bin/tests_empleado_nomina.o bin/empleadoNomina.o  -lgtest -lgtest_main -lpthread
clean:
	rm -Rf bin