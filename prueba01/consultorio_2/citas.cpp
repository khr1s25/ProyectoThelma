#include "citas.h"
#include <string.h>
#include <iostream>

using namespace std;

Citas::Citas()
{
    //ctor
}

Citas::~Citas()
{
    //dtor
}

int Citas::getFolio() const
{
    return folio;
}

void Citas::setFolio(int value)
{
    folio = value;
}

string Citas::getFecha() const
{
    return Fecha;
}

void Citas::setFecha(const string &value)
{
    Fecha = value;
}

string Citas::getHora() const
{
    return Hora;
}

void Citas::setHora(const string &value)
{
    Hora = value;
}

string Citas::getUPsicologo() const
{
    return uPsicologo;
}

void Citas::setUPsicologo(const string &value)
{
    uPsicologo = value;
}

string Citas::getFPaciente() const
{
    return fPaciente;
}

void Citas::setFPaciente(const string &value)
{
    fPaciente = value;
}
