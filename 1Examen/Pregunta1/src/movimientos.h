#ifndef MOVIMIENTOS_h
#define MOVIMIENTOS_h

using namespace std;

class Movimientos
{

protected:
    float movimiento = 0;

public:
    Movimientos();
    virtual float ReflejarMovimientoUsuario() = 0;
    virtual int DevolverTipo() = 0;
};

#endif