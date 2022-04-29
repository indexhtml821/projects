#ifndef ENVIOSFOREX_h
#define ENVIOSFOREX_h

#include "envios.h"

class EnviosPostales : public Envios
{
protected:
    
    int clase;                 
                                                
    float precioClase[3][3] = {{0.300,  0.450 , 0.600 },   //primera clase
                               {0.0280, 0.0530, 0.0750},   //segunda clase 
                               {0.0120, 0.0120, 0.0120} }; //tercera clase
    int fila;
    int columna;

public:
    EnviosPostales(float kg, float km, int clase);
    virtual float CalcularCosto();
    float ObtenerPrecio();
    
};

#endif