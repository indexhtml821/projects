#ifndef EMPLEADONOMINA_h
#define EMPLEADONOMINA_h

#include "empleado.h"

class EmpleadoNomina : public Empleado
{

public:
    EmpleadoNomina(int idEmpleado,
                   string nombre,
                   string apellido,
                   string email,
                   int tipoEmpleado,
                   int idSupervisor,
                   float salario);

    EmpleadoNomina();

};

#endif