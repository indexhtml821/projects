#ifndef ENVIOSFOREX_h
#define ENVIOSFOREX_h

#include "envios.h"

class EnviosFedex : public Envios
{
protected:
    float kg;
    float km;
    int clase;                 
                                //primera clase         //segunda clase         //tercera clase
    float precioClase[3][3] = {{0.300, 0.450, 0.600}, {0.0280, 0.0530, 0.0750}, {0.0120, 0.0120, 0.0120}};
    int fila;
    int columna;

public:
    EnviosFedex(float kg, float km, int clase);
    virtual float CalcularCosto();
    float ObtenerPrecio();
    
};

#endif