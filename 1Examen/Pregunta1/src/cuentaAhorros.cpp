#include "cuentaAhorros.h"
#include "deposito.h"
#include "retiro.h"

void CuentaAhorros::IngresarMovimiento(int tipo, float movimiento)
{

    if (tipo == 1)
    {

        Movimientos *movimientos = new Deposito(movimiento);
        movimientosEnLista.push_back(movimientos);
    }
    else if (tipo == 2)
    {
        Movimientos *movimientos = new Retiro(movimiento);
        movimientosEnLista.push_back(movimientos);
    }
}

float CuentaAhorros::ReflejarSaldo()
{

    int saldo = 0;
    for (int i = 0; i < this->movimientosEnLista.size(); i++)
    {

        if (movimientosEnLista.at(i)->DevolverTipo() == 1)
        {

            saldo += movimientosEnLista.at(i)->ReflejarMovimientoUsuario();
        }
        else if (movimientosEnLista.at(i)->DevolverTipo() == 2)
        {
            saldo -= movimientosEnLista.at(i)->ReflejarMovimientoUsuario();
        }
    }

    return saldo;
}