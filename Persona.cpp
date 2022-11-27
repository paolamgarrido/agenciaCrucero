#include "Persona.h"

//Inicializar metodos

//Constructor
Persona::Persona()
{

}

Persona::Persona(string _nombre, string _edad, string _ciudadania, string _email, string _pasaporte)
{
    nombre = _nombre;
    edad = _edad;
    ciudadania = _ciudadania;
    email = _email;
    pasaporte = _pasaporte;

}

Persona::~Persona()
{
    //dtor
}

void Persona::setNombre(string _nombre){
    nombre = _nombre;
}

string Persona::getNombre(){
    return nombre;
}

void Persona::setEdad(string _edad){
    edad = _edad;
}

string Persona::getEdad(){
    return edad;
}

void Persona::setCiudadania(string _ciudadania){
    ciudadania = _ciudadania;
}

string Persona::getCiudadania(){
    return ciudadania;
}

void Persona::setEmail(string _email){
    email = _email;
}

string Persona::getEmail(){
    return email;
}

void Persona::setPasaporte(string _pasaporte){
    pasaporte = _pasaporte;
}

string Persona::getPasaporte(){
    return pasaporte;
}

//Muestra todos los datos declarados de la persona.
void Persona::mostrarInfoPasajero(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Ciudadania: "<<ciudadania<<endl;
    cout<<"Email: "<<email<<endl;
    cout<<"Pasaporte: "<<pasaporte<<endl;
}
