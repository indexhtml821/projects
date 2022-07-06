#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <iostream>
#include <string>
#include <map>

using namespace std;
class Calculadora
{

protected:
    map<int id,Articulos *> articulos;

public:
    Calculadora();
    ~Calculadora();
    void IncluirArticulos(Articulo*);
    float CostoProduccion();
    string ObtenerArticulo(int id);

};

#endif