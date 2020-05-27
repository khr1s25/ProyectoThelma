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

        int getFolio() const;
        void setFolio(int value);

        string getFecha() const;
        void setFecha(const string &value);

        string getHora() const;
        void setHora(const string &value);

        string getUPsicologo() const;
        void setUPsicologo(const string &value);

        string getFPaciente() const;
        void setFPaciente(const string &value);

protected:

private:
        int folio;
        string Fecha;
        string Hora;
        string uPsicologo;
        string fPaciente;
};

#endif // CITAS_H
