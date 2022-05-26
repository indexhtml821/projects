#include "procesador.h"
#include "empleadoHoras.h"
#include "empleadoNomina.h"
#include <sstream>
#include <iomanip>
Procesador::Procesador(istream *streamPersonas, istream *streamNomina, istream *streamHoras)
{

    this->streamPersonas = streamPersonas;
    this->streamNomina = streamNomina;
    this->streamHoras = streamHoras;
}

void Procesador::anadirSalariosNomina()
{
    string infoNomina{};
    int idEmpleado = 0;
    float salario = 0;
    while (std::getline(*(this->streamNomina), infoNomina))
    {
        std::istringstream stream(infoNomina);
        stream >> idEmpleado >> salario;
        salariosNomina.insert(std::pair<int, float>(idEmpleado, salario));
    }
}
void Procesador::anadirSalariosHoras()
{
    string infoHoras{};
    int idEmpleado = 0;
    string precioPorHora = "";
    string horas_a_calcular = "";

    while (std::getline(*(this->streamHoras), infoHoras))
    {
        std::istringstream stream(infoHoras);
        stream >> idEmpleado >> precioPorHora >> horas_a_calcular;
        string infoHorasCacular = precioPorHora + " " + horas_a_calcular;
        salariosHora.insert(std::pair<int, string>(idEmpleado, infoHorasCacular));
    }
}

void Procesador::anadirEmpleados()
{

    anadirSalariosHoras();
    anadirSalariosNomina();
    string infoPersona{};

    while (std::getline(*(this->streamPersonas), infoPersona))
    {
        int idEmpleado = 0;
        string nombre = "";
        string apellido = "";
        string email = "";
        int tipoEmpleado = 0;
        int idSupervisor = 0;
        std::istringstream stream(infoPersona);
        stream >> idEmpleado >> nombre >> apellido >> email >> tipoEmpleado >> idSupervisor;

        if (tipoEmpleado == 1)
        {
            float salario = salariosNomina.at(idEmpleado);
            Empleado *empleadoNuevo = new EmpleadoNomina(idEmpleado,
                                                         nombre,
                                                         apellido,
                                                         email,
                                                         tipoEmpleado,
                                                         idSupervisor,
                                                         salario);
            empleadoNuevo->CalculoPago();
            empleados.insert(std::pair<int, Empleado *>(idEmpleado, empleadoNuevo));
        }
        else if (tipoEmpleado == 2)
        {
            int horasLaboradas = 0;
            float pagoPorHora = 0;
            string salario = salariosHora.at(idEmpleado);

            std::istringstream stream(salario);
            stream >> pagoPorHora >> horasLaboradas;

            Empleado *empleadoNuevo = new EmpleadoHoras(idEmpleado,
                                                        nombre,
                                                        apellido,
                                                        email,
                                                        tipoEmpleado,
                                                        idSupervisor,
                                                        horasLaboradas,
                                                        pagoPorHora);
            empleadoNuevo->CalculoPago();
            empleados.insert(std::pair<int, Empleado *>(idEmpleado, empleadoNuevo));
        }
    }
}

float Procesador::obtenerNomina(int id)
{
    return salariosNomina.at(id);
}

string Procesador::obtenerHoras(int id)
{
    return salariosHora.at(id);
}

string Procesador::obtenerEmpleado(int id)
{
    Empleado *empleadoSolicitado = empleados.at(id);

    string infoSolicitada = empleadoSolicitado->DevolverInfoEmpleado();

    return infoSolicitada;
}