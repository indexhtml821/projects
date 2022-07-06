#include "retiro.h"

Retiro::Retiro(float retiro)
{

    this->movimiento = retiro;
}

float Retiro::ReflejarMovimientoUsuario()
{

   return this->movimiento;
}

int Retiro::DevolverTipo()
{

    return tipo;
}