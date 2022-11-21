#include <iostream>
using namespace std;

#include <string>

class Persona
{
    private:
        string nombre;
        string edad;
        string ciudadania;
        string contacto;
        string pasaporte;

    public:
        Persona();
        void setNombre(string);
        string getNombre();
        void setEdad(string);
        string getEdad();
        void setCiudadania(string);
        string getCiudadania();
        void setContacto(string);
        string getContacto();
        void setPasaporte(string);
        string getPasaporte();
        string mostrarInfoPersona(Persona);

};
