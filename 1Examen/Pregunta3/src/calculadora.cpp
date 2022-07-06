#include "calculadora.h"

Calculadora ::Calculadora()
{
}

void IncluirArticulos(Articulo *articulo)
{

    Articulo *articuloNuevo = articulo

                                  articulos.push_back(std::pair<int, Nodo *>(articuloNuevo.ObtenerId(), articulo));
}
float CostoProduccion()
{

    float costoTotal = 0;
    for (int i = 0; i < articulos.size(); i++)
    {
        costoTotal = articulos.at(i).calculeCosto();
    }

    return costoTotal;
}

string ObtenerArticulo(int id)
{
    Articulo articulo = articulos.at(id);
    return articulo.Info()
}