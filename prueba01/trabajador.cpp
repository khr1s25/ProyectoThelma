#include "trabajador.h"

Trabajador::Trabajador()
{
    //ctor
}

Trabajador::~Trabajador()
{
    //dtor
}

string Trabajador::getPassword() const
{
    return Password;
}

void Trabajador::setPassword(const string &value)
{
    Password = value;
}

string Trabajador::getUsuario() const
{
    return Usuario;
}

void Trabajador::setUsuario(string value)
{
    Usuario = value;
}

string Trabajador::getNombre() const
{
    return Nombre;
}

void Trabajador::setNombre(const string &value)
{
    Nombre = value;
}

string Trabajador::getApellido() const
{
    return Apellido;
}

void Trabajador::setApellido(const string &value)
{
    Apellido = value;
}

int Trabajador::getTelefono() const
{
    return Telefono;
}

void Trabajador::setTelefono(int value)
{
    Telefono = value;
}

string Trabajador::getEmail() const
{
    return Email;
}

void Trabajador::setEmail(const string &value)
{
    Email = value;
}

int Trabajador::getCedulaMedica() const
{
    return cedulaMedica;
}

void Trabajador::setCedulaMedica(int value)
{
    cedulaMedica = value;
}
