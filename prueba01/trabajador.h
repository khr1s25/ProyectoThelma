#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <string>

using namespace std;


class Trabajador
{
    public:
        /** Default constructor */
        Trabajador();
        /** Default destructor */
        virtual ~Trabajador();      

        string getPassword() const;
        void setPassword(const string &value);

        string getUsuario() const;
        void setUsuario(string value);

        string getNombre() const;
        void setNombre(const string &value);

        string getApellido() const;
        void setApellido(const string &value);

        int getTelefono() const;
        void setTelefono(int value);

        string getEmail() const;
        void setEmail(const string &value);

        int getCedulaMedica() const;
        void setCedulaMedica(int value);

protected:

private:
        string Usuario;
        string Password;
        string Nombre;
        string Apellido;
        int Telefono;
        string Email;
        int cedulaMedica;
};

#endif // TRABAJADOR_H
