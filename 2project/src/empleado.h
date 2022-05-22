#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string> // for string class
using namespace std;

class Empleado
{
protected:
    int idEmpleado = 0;
    string nombre = "";
    string apellido = "";
    string email = "";
    int tipoEmpleado = 0;
    int idSupervisor = 0;
    float salario = 0;

public:
  
    
         
      ~Empleado();     
 
 //  virtual float CalculoPago() = 0;
    virtual float CalculoPago(float salarioBruto) = 0;

};

#endif