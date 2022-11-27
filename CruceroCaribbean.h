#ifndef CRUCEROCARIBBEAN_H
#define CRUCEROCARIBBEAN_H
#include "Crucero.h"

#include <iostream>
using namespace std;

//Metodo herencia
class CruceroCaribbean : public Crucero
{
    public:
        CruceroCaribbean(); //Constructor
        CruceroCaribbean(string, int, string, string, string, string, string, string);
        /*Se definen los metodos de los atributos en
        la clase Crucero Caribbean utilizando getters y setters*/
        void setPerfectStorm(string);
        string getPerfectStorm();
        void setLaserTag(string);
        string getLaserTag();
        void setFlowRider(string);
        string getFlowRider();
        //Metodo para mostrar toda la informacion del Crucero Caribbean.
        void mostrarCaribbean();
        virtual ~CruceroCaribbean();

    private:
        //Atributos de la clase Crucero Caribbean.
        string PerfectStorm;
        string LaserTag;
        string FlowRider;


};

#endif // CRUCEROCARIBBEAN_H
