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
        void Crear_Trabajador();
        void Modificar_Trabajador();
        void Eliminar_Trabajador();
        void Buscar_Trabajador();
        void Mostrar_Trabajador();

    protected:

    private:
        int Usuario;
        string Contraseña;
        string Nombre;
        string Apellido;
        int Telefono;
        string Email;
        int Cedula_medica;
};

#endif // TRABAJADOR_H
