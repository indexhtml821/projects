#include <gtest/gtest.h>
#include "../src/envios.h"

namespace
{

    TEST(Test_Envios, Test_enviobase)
    {

        /// AAA

        // Arrange - configurar el escenario
        Envios envios;

        // Act - ejecute la operación
        float resultado = envios.CalcularCosto(2, 2);
        float esperada = 4;

        //Assert -valide resultados

        EXPECT_FLOAT_EQ(esperada,resultado);
    }

}