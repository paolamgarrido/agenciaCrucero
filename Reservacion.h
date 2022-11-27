#ifndef RESERVACION_H
#define RESERVACION_H

#include "Persona.h"
#include "crucero.h"

#include <iostream>

using namespace std;

class Reservacion
{
    public:
        /*Se definen los metodos de los atributos en
        la clase reservación utilizando getters y setters*/
        Reservacion(); //Constructor
        Reservacion(int,string,string,string,Persona,Crucero);
        void setNumReserva(int);
        int getNumReserva();
        void setNomBarco(string);
        string getNomBarco();
        void setNomReserva(string);
        string getNomReserva();
        void setNomLinea(string);
        string getNomLinea();
        //Metodo para mostrar toda la informacion de la reservación.
        void mostrarInfoReservacion();
        //Metodos que utilizan composición
        void guardarNomReserva(Persona nombre);
        void guardarLineaCrucero(Crucero linea);
        virtual ~Reservacion();

    private:
        //Atributos de la clase reservación.
        int numReserva;
        string nombreBarco;
        string nombreReserva;
        string nombreLinea;
        //Atributo de las otras clases.
        Persona nombre;
        Crucero linea;
};

#endif // RESERVACION_H
