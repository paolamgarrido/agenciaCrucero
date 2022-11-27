#ifndef CRUCEROMEDITERRANEAN_H
#define CRUCEROMEDITERRANEAN_H
#include "Crucero.h"

#include <iostream>
using namespace std;

//Metodo herencia
class CruceroMediterranean : public Crucero
{
    public:
        CruceroMediterranean();//Constructores
        CruceroMediterranean(string, int, string, string, string, string,string,string);
        /*Se definen los metodos de los atributos en
        la clase Crucero Mediterranean utilizando getters y setters*/
        void setBumperCars(string);
        string getBumperCars();
        void setRipcord(string);
        string getRipcord();
        void setNorthStar(string);
        string getNorthStar();
        //Metodo para mostrar toda la informacion del Crucero Mediterranean.
        void mostrarMediterranean();
        virtual ~CruceroMediterranean();

    private:
        //Atributos de la clase Crucero Mediterranean.
        string BumperCars;
        string Ripcord;
        string NorthStar;
};

#endif // CRUCEROMEDITERRANEAN_H
