#ifndef CITAS_H
#define CITAS_H
#include <string>

using namespace std;

class Citas
{
    public:
        /** Default constructor*/
        Citas();
        /** Default destructor */
        virtual ~Citas();
        void Crear();
        void Modificar();
        void Eliminar();
        void Buscar();

    protected:

    private:
        int folio;
        string Fecha [10];
        string Hora[5];
        string U_Psicologo;
        string F_Paciente;
};

#endif // CITAS_H
