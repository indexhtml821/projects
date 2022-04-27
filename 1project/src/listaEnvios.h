#ifndef LISTAENVIOS_H
#define LISTAENVIOS_H

#include "envios.h"
#include <vector>

using namespace std;

class ListaEnvios
{

vector <Envios *> enviosEnLista;

public:
 ListaEnvios();
~ListaEnvios();

void AgregarEnvio(Envios *envio);
float ObtenerTotalEnvios();
    
};



#endif