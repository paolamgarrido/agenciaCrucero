#include "Crucero.h"

Crucero::Crucero()
{
    rutaViaje = "Puerto-Cape Liberty (New York),New Jersey  Destino-Southern Caribbean";
    habitacion = "Ocean Room";
    comida = "Internacional";
    lineaCrucero = "Royal Caribbean";
    costo = "750";
}

void Crucero::setRutaViaje(string _rutaViaje){
    rutaViaje = _rutaViaje;
}

string Crucero::getRutaViaje(){
    return rutaViaje;
}

void Crucero::setHabitacion(string _habitacion){
    habitacion = _habitacion;
}

string Crucero::getHabitacion(){
    return habitacion;
}

void Crucero::setComida(string _comida){
    comida = _comida;
}

string Crucero::getComida(){
    return comida;
}

void Crucero::setLineaCrucero(string _lineaCrucero){
    lineaCrucero = _lineaCrucero;
}

string Crucero::getLineaCrucero(){
    return lineaCrucero;
}

void Crucero::setCosto(string _costo){
    costo = _costo;
}

string Crucero::getCosto(){
    return costo;
}


string Crucero::mostrarInfoCrucero(Crucero datosCrucero){
    string info = "\nInformacion Crucero\nRuta: "+getRutaViaje()+"\nHabitación: "+getHabitacion()+"\nComida: "+getComida()+"\nLinea Crucero: "+getLineaCrucero()+"\nCosto: "+getCosto();
    return info;
}

