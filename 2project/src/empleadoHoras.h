#ifndef EMPLEADOHORAS_h
#define EMPLEADOHORAS_h

#include "empleado.h"

class EmpleadoHoras : public Empleado
{

public:
    EmpleadoHoras(int idEmpleado,
                   string nombre,
                   string apellido,
                   string email,
                   int tipoEmpleado,
                   int idSupervisor,
                   float salario);

   float CalculoPago() ;

};



#endif