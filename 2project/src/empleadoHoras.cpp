#include "empleadoHoras.h"

using namespace std;
EmpleadoHoras::EmpleadoHoras(int idEmpleado,
                             string nombre,
                             string apellido,
                             string email,
                             int tipoEmpleado,
                             int idSupervisor, int horasLaboradas,
                             float pagoPorHora)
{

    this->idEmpleado = idEmpleado;
    this->nombre = nombre;
    this->apellido = apellido;
    this->email = email;
    this->tipoEmpleado = tipoEmpleado;
    this->idSupervisor = idSupervisor;
    this->horasLaboradas=horasLaboradas;
    this->pagoPorHora=pagoPorHora;

}

float EmpleadoHoras::CalculoPago()
{

    return (float)this->horasLaboradas * pagoPorHora;
}