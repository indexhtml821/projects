#include <gtest/gtest.h>
#include "../src/enviosPostales.h"

namespace
{

    TEST(Test_Envios_Postales, Test_obtenerprecio)
    {

        /// AAA

        // Arrange - configurar el escenario
        EnviosPostales enviosPostales(2, 2, 1);  // primera clase de 0-3 kg
        EnviosPostales enviosPostales1(4, 2, 1); // primera clase de 4-8 kg
        EnviosPostales enviosPostales2(9, 2, 1); // primera clase de 9+ kg

        EnviosPostales enviosPostales3(2, 2, 2); // segunda clase de 0-3 kg
        EnviosPostales enviosPostales4(4, 2, 2); // segunda clase de 4-8 kg
        EnviosPostales enviosPostales5(9, 2, 2); // segunda clase de 9+ kg

        EnviosPostales enviosPostales6(2, 2, 3); // tercera clase de 0-3 kg
        EnviosPostales enviosPostales7(4, 2, 3); // tercera clase de 4-8 kg
        EnviosPostales enviosPostales8(9, 2, 3); // tercera clase de 9+ kg

        // Act - ejecute la operación
        float resultado = enviosPostales.ObtenerPrecio();
        float esperada = 0.300;
        float resultado1 = enviosPostales.ObtenerPrecio();
        float esperada1 = 0.450;
        float resultado2 = enviosPostales.ObtenerPrecio();
        float esperada2 = 0.600;

        float resultado3 = enviosPostales.ObtenerPrecio();
        float esperada3 = 0.0280;
        float resultado4 = enviosPostales.ObtenerPrecio();
        float esperada4 = 0.0530;
        float resultado5 = enviosPostales.ObtenerPrecio();
        float esperada5 = 0.0750;

        float resultado6 = enviosPostales.ObtenerPrecio();
        float esperada6 = 0.0120;
        float resultado7 = enviosPostales.ObtenerPrecio();
        float esperada7 = 0.0120;
        float resultado8 = enviosPostales.ObtenerPrecio();
        float esperada8 = 0.0120;

        // Assert -valide resultados

        EXPECT_FLOAT_EQ(esperada, resultado);
    }
    TEST(Test_Envios_Postales, Test_CalcularCostoPrimeraClase)
    {

        /// AAA

        // Arrange - configurar el escenario
        EnviosPostales enviosPostales(2, 2, 1);  // primera clase de 0-3 kg
        EnviosPostales enviosPostales1(4, 2, 1); // primera clase de 4-8 kg
        EnviosPostales enviosPostales2(9, 2, 1); // primera clase de 9+ kg

        // Act - ejecute la operación
        float resultado = enviosPostales.CalcularCosto();
        float esperada = 0.6;

        float resultado1 = enviosPostales1.CalcularCosto();
        float esperada1 = 0.9;

        float resultado2 = enviosPostales2.CalcularCosto();
        float esperada2 = 1.2;

        // Assert -valide resultados

        EXPECT_FLOAT_EQ(esperada, resultado);
        EXPECT_FLOAT_EQ(esperada1, resultado1);
        EXPECT_FLOAT_EQ(esperada2, resultado2);
    }

    TEST(Test_Envios_Postales, Test_CalcularCostoSegundaClase)
    {

        /// AAA

        // Arrange - configurar el escenario
        EnviosPostales enviosPostales(2, 2, 2);  // segunda clase de 0-3 kg
        EnviosPostales enviosPostales1(4, 2, 2); // segunda clase de 4-8 kg
        EnviosPostales enviosPostales2(9, 2, 2); // segunda clase de 9+ kg
        // Act - ejecute la operación
        float resultado = enviosPostales.CalcularCosto();
        float esperada = 0.056;

        float resultado1 = enviosPostales1.CalcularCosto();
        float esperada1 = 0.106;

        float resultado2 = enviosPostales2.CalcularCosto();
        float esperada2 = 0.15;

        // Assert -valide resultados

        EXPECT_FLOAT_EQ(esperada, resultado);

        EXPECT_FLOAT_EQ(esperada1, resultado1);

        EXPECT_FLOAT_EQ(esperada2, resultado2);
    }

    TEST(Test_Envios_Postales, Test_CalcularCostoTerceraClase)
    {

        /// AAA

        // Arrange - configurar el escenario
        EnviosPostales enviosPostales(2, 2, 3);  // tercera clase de 0-3 kg
        EnviosPostales enviosPostales1(4, 2, 3); // tercera clase de 4-8 kg
        EnviosPostales enviosPostales2(9, 2, 3); // tercera clase de 9+ kg
        // Act - ejecute la operación
        float resultado = enviosPostales.CalcularCosto();
        float esperada = 0.024;

        float resultado1 = enviosPostales1.CalcularCosto();
        float esperada1 = 0.024;

        float resultado2 = enviosPostales2.CalcularCosto();
        float esperada2 = 0.024;

        // Assert -valide resultados

        EXPECT_FLOAT_EQ(esperada, resultado);

        EXPECT_FLOAT_EQ(esperada1, resultado1);

        EXPECT_FLOAT_EQ(esperada2, resultado2);
    }

}
