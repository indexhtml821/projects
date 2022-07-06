#include <iostream>
#include <vector>

#include "cuentaAhorros.h"

using namespace std;

int main()
{

    CuentaAhorros cuentaAhorro;

    cuentaAhorro.IngresarMovimiento(1, 2000);
    cuentaAhorro.IngresarMovimiento(2, 1000);

    float saldo = cuentaAhorro.ReflejarSaldo();

    cout << saldo << endl;
}