#include <iostream>
#include "envios.h"
#include "enviosFedex.h"
#include "enviosPostales.h"
#include "listaEnvios.h"
#include <vector>

using namespace std;

int main()
{

ListaEnvios *listaEnvios = new ListaEnvios();

EnviosFedex *envioFedex0 = new EnviosFedex(2,2);
EnviosPostales *envioPostal0= new EnviosPostales(2,2,2);

listaEnvios->AgregarEnvio(envioFedex0);
listaEnvios->AgregarEnvio(envioPostal0);

float total = listaEnvios->ObtenerTotalEnvios();

cout << "Total en envios= "<<total << endl;

}