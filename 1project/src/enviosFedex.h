#ifndef ENVIOSPOSTALES_h
#define ENVIOSPOSTALES_h

#include "envios.h"

class EnviosFedex : public Envios
{
protected:
 
    float costoBase = 35.00;
    float costoFinal= 0;
    float precioFinal = 0 ;
 
public:
    EnviosFedex(float kg, float km);
    virtual float CalcularCosto();
    void ActualizarCostos(); 
    
};

#endif