#include "nodo.h"

Nodo::~Nodo()
{
    delete empleado;
    delete supervisor;
    delete empleadoASupervisar;
}

Nodo::Nodo(int id, Empleado *empleado)
{

    this->id = id;
    this->empleado = empleado;
}

void Nodo ::InsertarSupervisor(Nodo *supervisor)
{

    this->supervisor = supervisor;
}

void Nodo ::InsertarSupervisar(Nodo *supervisar)
{

    this->empleadoASupervisar = supervisar;
}
Empleado *Nodo::DevolverEmpleado()
{

    Empleado *empleadoSolicitado = this->empleado;
    return empleadoSolicitado;
}