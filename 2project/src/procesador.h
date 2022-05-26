#ifndef PROCESADOR_H
#define PROCESADOR_H

#include "empleado.h"
#include <map>
#include <vector>
#include <istream>

using namespace std;

class Procesador
{
protected:
  istream *streamPersonas;
  istream *streamNomina;
  istream *streamHoras;
  map<int, Empleado *> empleados;
  map<int, float> salariosNomina;
  map<int, string> salariosHora;

public:
  Procesador(istream *streamPersonas, istream *streamNomina, istream *streamHoras);
  void anadirSalariosNomina();
  void anadirSalariosHoras();
  void anadirEmpleados();
  float obtenerNomina(int id);
  string obtenerHoras(int id);
  string obtenerEmpleado(int id);
};

#endif