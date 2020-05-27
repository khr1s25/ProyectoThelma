#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>

using namespace std;

class Paciente
{
    public:
        /** Default constructor */
        Paciente();
        /** Default destructor */
        virtual ~Paciente();

        int getFolio() const;
        void setFolio(int value);

        int getTelefono() const;
        void setTelefono(int value);

        string getNombre() const;
        void setNombre(const string &value);

        string getApellido() const;
        void setApellido(const string &value);

        string getDireccion() const;
        void setDireccion(const string &value);

        string getEmail() const;
        void setEmail(const string &value);

protected:

private:
        int Folio=0;
        string Nombre;
        string Apellido;
        int Telefono;
        string Direccion;
        string Email;

};

#endif // PACIENTE_H
