#include "empleadoNomina.h"

using namespace std;

EmpleadoNomina::EmpleadoNomina(int idEmpleado,
                               string nombre,
                               string apellido,
                               string email,
                               int tipoEmpleado,
                               int idSupervisor,
                               float salario) : Empleado(idEmpleado,
                                                         nombre,
                                                         apellido,
                                                         email,
                                                         tipoEmpleado,
                                                         idSupervisor,
                                                         salario)
{

    this->idEmpleado = idEmpleado;
    this->nombre=nombre;
    this->apellido=apellido;
    this->email=email;
    this->tipoEmpleado=tipoEmpleado;
    this->idSupervisor=idSupervisor;
    this->salario=salario;
}

EmpleadoNomina::EmpleadoNomina(){}
