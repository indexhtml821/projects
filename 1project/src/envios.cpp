#include"envios.h"
#include<iostream>
#include<stdlib.h>
using namespace std;


Envios::Envios(float kg, float km)
{

    this->kg = kg;
    this->km = km;
    
}

Envios::Envios()
{

    
    
}



float Envios::CalcularCosto(float kg, float km){

return kg*km;

}