#include "paciente.h"

Paciente::Paciente()
{
    //ctor
}

Paciente::~Paciente()
{
    //dtor
}

int Paciente::getFolio() const
{
    return Folio;
}

void Paciente::setFolio(int value)
{
    Folio = value;
}

int Paciente::getTelefono() const
{
    return Telefono;
}

void Paciente::setTelefono(int value)
{
    Telefono = value;
}

string Paciente::getNombre() const
{
    return Nombre;
}

void Paciente::setNombre(const string &value)
{
    Nombre = value;
}

string Paciente::getApellido() const
{
    return Apellido;
}

void Paciente::setApellido(const string &value)
{
    Apellido = value;
}

string Paciente::getDireccion() const
{
    return Direccion;
}

void Paciente::setDireccion(const string &value)
{
    Direccion = value;
}

string Paciente::getEmail() const
{
    return Email;
}

void Paciente::setEmail(const string &value)
{
    Email = value;
}


