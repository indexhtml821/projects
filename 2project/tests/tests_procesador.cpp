#include <gtest/gtest.h>
#include "../src/procesador.h"

namespace
{
  TEST(Tests_Procesador, Test_Anadir_Salarios_Nomina)
  {
    /// AAA

    // Arrange - configurar el escenario
    string pruebaNomina = "1 4600.98";
    string pruebaPersonas = "cumple requisito";
    string pruebaHoras = "cumple requisito ";
    istringstream streamNomina(pruebaNomina);
    istringstream streamPersonas(pruebaPersonas);
    istringstream streamHoras(pruebaHoras);

    Procesador procesador(&streamPersonas, &streamNomina, &streamHoras);

    // Act - ejecute la operación`-
    procesador.anadirSalariosNomina();

    // Assert - valide los resultados

    float esperada = 4600.98;
    float resultado = procesador.obtenerNomina(1);

    EXPECT_FLOAT_EQ(esperada, resultado);
  }

  TEST(Tests_Procesador, Test_Anadir_Salarios_Horas)
  {
    /// AAA

    // Arrange - configurar el escenario
    string pruebaNomina = "1 4600.98";
    string pruebaPersonas = "cumple requisito";
    string pruebaHoras = "452 34.84 43 ";
    istringstream streamNomina(pruebaNomina);
    istringstream streamPersonas(pruebaPersonas);
    istringstream streamHoras(pruebaHoras);

    Procesador procesador(&streamPersonas, &streamNomina, &streamHoras);

    // Act - ejecute la operación`-
    procesador.anadirSalariosHoras();

    // Assert - valide los resultados

    string esperada = "34.84 43";
    string resultado = procesador.obtenerHoras(452);

    EXPECT_EQ(esperada, resultado);
  } 

}