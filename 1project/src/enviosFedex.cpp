#include "enviosFedex.h"

using namespace std;

EnviosFedex::EnviosFedex(float kg,float km, int clase){

this->kg=kg;
this->km=km;
this->clase=clase;

    
}

float EnviosFedex::CalcularCosto(){

return km * ( km * ObtenerPrecio( ));
}



float EnviosFedex::ObtenerPrecio(){
    float precio= 0;

    if ( 0 <= kg && kg <= 3)
    {
        columna = 0;
    }else if (4 <= kg && kg <= 8)
    {
         columna = 1;
    }else if ( 9 <= kg)
    {
        columna = 3;
    }
    precio=precioClase[clase][columna];
    return  precio ;
}