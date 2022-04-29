#include "enviosFedex.h"

using namespace std;

EnviosFedex::EnviosFedex(float kg, float km): Envios(kg,km)
{

    this->kg = kg;
    this->km = km;
   ActualizarCostos();
}

float EnviosFedex::CalcularCosto()
{

     

    precioFinal = km * costoFinal;
    return precioFinal;
}

void EnviosFedex::ActualizarCostos()
{

    if (km > 500)
    {
        costoFinal += 15.00;
    }

    if (kg > 10)
    {
        costoFinal += 10.00;
    }

    costoFinal += costoBase;
}

float EnviosFedex::GetCostoFinal(){

    return costoFinal;
}