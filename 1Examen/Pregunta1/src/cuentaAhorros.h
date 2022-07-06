#ifndef CUENTAAHORROS_h
#define CUENTAAHORROS_h

#include "movimientos.h"


#include <vector>

using namespace std;

class CuentaAhorros
{

protected:
    vector<Movimientos *> movimientosEnLista;

public:
    void IngresarMovimiento(int tipo, float movimiento);
    float ReflejarSaldo();
};

#endif