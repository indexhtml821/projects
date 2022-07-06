#ifndef DEPOSITO_H
#define DEPOSITO_H

#include <iostream>
#include "movimientos.h"

using namespace std;

class Deposito : public Movimientos
{

protected:
    int tipo = 1;

public:
    Deposito(float deposito);
    float ReflejarMovimientoUsuario();
    int DevolverTipo();
};

#endif