#include "enviosPostales.h"

using namespace std;

EnviosPostales::EnviosPostales(float kg, float km, int clase) : Envios(kg, km)
{

    this->kg = kg;
    this->km = km;
    this->clase = clase;
}

float EnviosPostales::CalcularCosto()
{

    return km * ObtenerPrecio();
}

float EnviosPostales::ObtenerPrecio()
{
    float precio = 0;

    if (0 <= kg && kg <= 3)
    {
        columna = 0;
    }
    else if (4 <= kg && kg <= 8)
    {
        columna = 1;
    }
    else if (9 <= kg)
    {
        columna = 2;
    }

    --clase;
    precio = precioClase[clase][columna];
    return precio;
}
