#include <gtest/gtest.h>
#include "../src/empleadoHoras.h"

namespace
{
    TEST(Tests_Empleado_Horas, Test_empleadoHoras)
    {
        /// AAA


        // Arrange - configurar el escenario
      EmpleadoHoras empleadonomina(1, "Denis", "Tyler", "denis_tyler@biz.com", 1, 1,55,42.26);
      

        // Act - ejecute la operación`-
        float actual = empleadonomina.CalculoPago();
        float esperada = 2324.3 ;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperada, actual);
    }

}