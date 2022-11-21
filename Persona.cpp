#include "Persona.h"

Persona::Persona()
{
    nombre = "Paola";
    edad = "21";
    ciudadania = "Mexicana";
    contacto = "pm.garridoo@gmail.com";
    pasaporte = "G22394144";
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

void Persona::setContacto(string _contacto){
    contacto = _contacto;
}

string Persona::getContacto(){
    return contacto;
}

void Persona::setPasaporte(string _pasaporte){
    contacto = _pasaporte;
}

string Persona::getPasaporte(){
    return pasaporte;
}

string Persona::mostrarInfoPersona(Persona pasajero){
    string info_p = "Informacion del pasajero\nNombre: "+pasajero.getNombre()+"\nEdad: "+pasajero.getEdad()+"\nCiudadania: "+pasajero.getCiudadania()+"\nContacto: "+pasajero.getContacto()+"\nPasaporte: "+pasajero.getPasaporte();
    return info_p;
}
