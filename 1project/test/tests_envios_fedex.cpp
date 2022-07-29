#include <gtest/gtest.h>
#include "../src/enviosFedex.h"

namespace
{

TEST(Test_Envios, Test_actualizarcostos)
    {

        /// AAA

        // Arrange - configurar el escenario
        EnviosFedex enviosFedex(11,501);
        EnviosFedex enviosFedex2(11,500);
        EnviosFedex enviosFedex1(10,501);
        EnviosFedex enviosFedex3(10,500);

        // Act - ejecute la operación
        
        float resultado = enviosFedex.CalcularCosto();
        float esperada = 60;

        float resultado1 = enviosFedex1.CalcularCosto();
        float esperada1 = 50;

        float resultado2 = enviosFedex2.CalcularCosto();
        float esperada2 = 45;

        float resultado3 = enviosFedex3.CalcularCosto();
        float esperada3 = 35;

        //Assert -valide resultados

        EXPECT_FLOAT_EQ(esperada,resultado);
        EXPECT_FLOAT_EQ(esperada1,resultado1);
        EXPECT_FLOAT_EQ(esperada2,resultado2);
        EXPECT_FLOAT_EQ(esperada3,resultado3);
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
