#include <gtest/gtest.h>
#include "../src/enviosFedex.h"

namespace
{

    TEST(Test_Envios, Test_enviobase)
    {

        /// AAA

        // Arrange - configurar el escenario
        EnviosFedex enviosFedex(2,2,1);

        // Act - ejecute la operación
        float resultado = enviosFedex.CalcularCosto();
        float esperada = 0.112;

        //Assert -valide resultados

        EXPECT_FLOAT_EQ(esperada,resultado);
    }

}