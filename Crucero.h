#ifndef CRUCERO_H
#define CRUCERO_H

#include <iostream>
using namespace std;

class Crucero
{
    /*Se definen los metodos de los atributos en
    la clase crucero utilizando getters y setters*/
    public:
        Crucero();//Constructor
        Crucero(string,int,string, string,string);
        void setLineaCrucero(string);
        string getLineaCrucero();
        void setCosto(int);
        int getCosto();
        void setRutaCrucero(string);
        string getRutaCrucero();
        void setFecha(string);
        string getFecha();
        void setHabitacion(string);
        string getHabitacion();
        //Metodo para mostrar toda la informacion del crucero.
        void mostrarCrucero();
        virtual ~Crucero();

    private:
        //Atributos de la clase crucero.
        string lineaCrucero;
        int costo;
        string rutaCrucero;
        string fecha;
        string habitacion;


};

#endif // CRUCERO_H
