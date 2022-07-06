#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"
#include <iostream>
#include <string>

using namespace std;
class Lista
{

    Nodo *primerNodo;

public:
    Lista();
    Lista(int primerValor);

    ~Lista(); // Destructor

    void AgregarValor(int nuevoValor);
    friend ostream &operator<<(ostream &o, const Lista *lista);
};

#endif