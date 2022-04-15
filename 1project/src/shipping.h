#ifndef envios_h
#define envios_h

class Shipping
{

    double kg;
    double km;

public:
    double CalcularCosto(double kg, double km);
};

#endif