#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona
{
    public:
        /*Se definen los metodos de los atributos en
        la clase persona utilizando getters y setters*/
        Persona();//Constructor
        Persona(string,string,string,string,string);
        void setNombre(string);
        string getNombre();
        void setEdad(string);
        string getEdad();
        void setCiudadania(string);
        string getCiudadania();
        void setEmail(string);
        string getEmail();
        void setPasaporte(string);
        string getPasaporte();
        //Metodo para toda la informacion del pasajero.
        void mostrarInfoPasajero();
        virtual ~Persona();

    private:
        //Atributos de la clase persona.
        string nombre;
        string edad;
        string ciudadania;
        string email;
        string pasaporte;
};

#endif // PERSONA_H
