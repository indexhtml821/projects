#include <iostream>
#include "envios.h"
#include "enviosFedex.h"
#include "enviosPostales.h"

#include <vector>

using namespace std;

int main()
{

vector <Envios *> enviosEnLista;

EnviosFedex *envioFedex0 = new EnviosFedex(2,2);
EnviosPostales *envioPostal0= new EnviosPostales(2,2,2);
enviosEnLista.push_back(envioFedex0);
enviosEnLista.push_back(envioPostal0);

    float resultado = 0;

    for (Envios *envio : enviosEnLista)
    {
        resultado += envio->CalcularCosto();
    }



cout << "Total en envios= "<<resultado << endl;

delete envioFedex0;
delete envioPostal0;


}