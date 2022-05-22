#ifndef EMPLEADONOMINA_h
#define EMPLEADONOMINA_h

#include "empleado.h"

using namespace std;

class EmpleadoNomina : public Empleado
{
protected:
float salariofinal;
public:
  
    EmpleadoNomina(int idEmpleado,
                   string nombre,
                   string apellido,
                   string email,
                   int tipoEmpleado,
                   int idSupervisor,
                   float salario);


      float CalculoPago() ;
     

};

#endif