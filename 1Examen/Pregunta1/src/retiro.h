#ifndef RETIRO_h
#define RETIRO_h

#include "movimientos.h"

using namespace std;

class Retiro : public Movimientos
{

protected:
    int tipo = 2;

public:
    Retiro(float retiro);
    float ReflejarMovimientoUsuario();
    int DevolverTipo();
};

#endif