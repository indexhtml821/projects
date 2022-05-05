#include <gtest/gtest.h>
#include "../src/enviosFedex.h"

namespace
{

TEST(Test_Envios, Test_actualizarcosto)
    {

        /// AAA

        // Arrange - configurar el escenario
        EnviosFedex enviosFedex(11,501);

        // Act - ejecute la operación
        
        float resultado = enviosFedex.CalcularCosto();
        float esperada = 60;

        //Assert -valide resultados

        EXPECT_FLOAT_EQ(esperada,resultado);
    }

    TEST(Test_Envios, Test_enviobase)
    {

        /// AAA

        // Arrange - configurar el escenario
        EnviosFedex enviosFedex(2,2);

        // Act - ejecute la operación
        float resultado = enviosFedex.CalcularCosto();
        float esperada = 35;

        //Assert -valide resultados

        EXPECT_FLOAT_EQ(esperada,resultado);
    }

}