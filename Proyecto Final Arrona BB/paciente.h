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
        void Crear_Paciente();
        void Modificar_Paciente();
        void Eliminar_Paciente();
        void Buscar_Paciente();
        void Mostrar_Paciente();

    protected:

    private:
        int Folio=0;
        string Nombre[40];
        string Apellido[40];
        int Telefono[10];
        string Direccion[40];
        string Email[40];

};

#endif // PACIENTE_H
