#include "listaEnvios.h"

ListaEnvios::ListaEnvios() {

}

ListaEnvios::~ListaEnvios() {
    for (Envios* empleado : this->enviosEnLista)
    {
        delete empleado;
    }

    this->enviosEnLista.clear();
}

void ListaEnvios::AgregarEnvio(Envios *envio) {
    this->enviosEnLista.push_back(envio);
}

float ListaEnvios::ObtenerTotalEnvios() {
    float resultado = 0;

    for (Envios *envio : this->enviosEnLista)
    {
        resultado += envio->CalcularCosto();
    }

    return resultado;
}