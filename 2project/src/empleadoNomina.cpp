#include "empleadoNomina.h"

using namespace std;

EmpleadoNomina::EmpleadoNomina(int idEmpleado,
                               string nombre,
                               string apellido,
                               string email,
                               int tipoEmpleado,
                               int idSupervisor,
                               float salario) 
{

    this->idEmpleado = idEmpleado;
    this->nombre = nombre;
    this->apellido = apellido;
    this->email = email;
    this->tipoEmpleado = tipoEmpleado;
    this->idSupervisor = idSupervisor;
    this->salario = salario;
}


float EmpleadoNomina::CalculoPago(float salarioBruto)
{
    float impuesto = 0.07;
   return salarioBruto-(salarioBruto*impuesto);
}
