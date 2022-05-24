#include "procesador.h"
#include <fstream>

using namespace std;

int main()
{

    string archivoPersonas = "personas.txt";
    string archivoNomina = "nomina.txt";
    string archivoHorasTrabajadas = "horastrabajadas.txt";

    ifstream lectorPersonas(archivoPersonas, std::ifstream::in); // Por default abriendo como texto

    if (!lectorPersonas.is_open())
    {
        std::cerr << "Error leyendo archivo ejemplo.txt" << std::endl;
        return -1;
    }

    ifstream lectorNomina(archivoNomina, std::ifstream::in); // Por default abriendo como texto

    if (!lectorNomina.is_open())
    {
        std::cerr << "Error leyendo archivo ejemplo.txt" << std::endl;
        return -1;
    }

    ifstream lectorHorasTrabajadas(archivoHorasTrabajadas, std::ifstream::in); // Por default abriendo como texto

    if (!lectorHorasTrabajadas.is_open())
    {
        std::cerr << "Error leyendo archivo ejemplo.txt" << std::endl;
        return -1;
    }


    

    lectorPersonas.close();
    lectorNomina.close();
    lectorHorasTrabajadas.close();
}