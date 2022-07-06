#include "deposito.h"

Deposito::Deposito(float ingreso)
{

    this->movimiento = ingreso;
}

float Deposito::ReflejarMovimientoUsuario()
{
    return this->movimiento;
}

int Deposito::DevolverTipo()
{
    return this->tipo;
}
