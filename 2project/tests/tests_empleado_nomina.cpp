#include <gtest/gtest.h>
#include "../src/empleadoNomina.h"

namespace
{
    TEST(Tests_Empleado_Nomina, Test_empleadoNomina)
    {
        /// AAA


        // Arrange - configurar el escenario
      EmpleadoNomina empleadonomina(1, "Denis", "Tyler", "denis_tyler@biz.com", 1, 1, 4600.98);
      empleadonomina.setSalarioBruto(4000.67);

        // Act - ejecute la operación`-
        float actual = empleadonomina.CalculoPago();
        float esperada = 3720.6231 ;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperada, actual);
    }

}