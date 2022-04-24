#ifndef envios_h
#define envios_h

class Envios{

    float kg;
    float km;

public:
  virtual float CalcularCosto(float kg,float km);
  
};

#endif