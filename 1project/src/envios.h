#ifndef envios_h
#define envios_h

class Envios
{

protected:
    float kg;
    float km;
    float precioFinal;

public:
    Envios(float kg, float km);
    Envios();
    virtual float CalcularCosto() = 0;
};

#endif
