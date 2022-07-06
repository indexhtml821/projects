#include <gtest/gtest.h>
#include "../src/calculadora.h"

namespace
{
    TEST(Calculadora_Test, Test_Añadir_Articulo)
    {
        /// AAA

        // Arrange - configurar el escenario

        Calculadora *calculadora = new Calculadora;
        Articulo *articulo = new Articulo(3, "arcos")

                             // Act - ejecute la operación

                             calculadora.IncluirArticulos(articulo);

        string valorActual = calculadora->ObtenerArticulo(1).DevolverInfo();
        string valorEsperado = "kg nombreArticulo";

        delete calculadora;

        // Assert - valide los resultados

        EXPECT_EQ(valorEsperado, valorActual);
    }

    TEST(Calculadora_Test, Test_Costo_Produccion)
    {
        /// AAA

        // Arrange - configurar el escenario

        Calculadora *calculadora = new Calculadora;
        Articulo *articulo = new Articulo(1, "arcos")
            Articulo *articulo1 = new Articulo(2, "arcos")
                Articulo *articulo2 = new Articulo(3, "arcos")

                                      // Act - ejecute la operación

        calculadora.IncluirArticulos(articulo);
        calculadora.IncluirArticulos(articulo1);
        calculadora.IncluirArticulos(articulo2);

        int valorActual = calculadora->CostoProduccion();
        int valorEsperado = 1000;

        delete calculadora;

        // Assert - valide los resultados

        EXPECT_EQ(valorEsperado, valorActual);
    }

}