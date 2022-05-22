#include <gtest/gtest.h>
#include "../src/enviosPostales.h"

namespace
{


TEST(Test_Envios_Postalse, Test_obtenerprecio)
    {

        /// AAA

        // Arrange - configurar el escenario
        EnviosPostales enviosPostales(1,4,1);
        

        // Act - ejecute la operación
        float resultado = enviosPostales.ObtenerPrecio();
        float esperada = 0.0280;

        //Assert -valide resultados

        EXPECT_FLOAT_EQ(esperada,resultado);
    }
    TEST(Test_Envios, Test_enviobase)
    {

        /// AAA

        // Arrange - configurar el escenario
        EnviosPostales enviosPostales(2,2,1);

        // Act - ejecute la operación
        float resultado = enviosPostales.CalcularCosto();
        float esperada = 0.112;

        //Assert -valide resultados

        EXPECT_FLOAT_EQ(esperada,resultado);
    }

}