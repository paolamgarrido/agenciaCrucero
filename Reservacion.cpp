#include "Reservacion.h"

Reservacion::Reservacion()
{
    fecha = "8/Julio/2023 - 15/Julio/2023";
    reserva = 123456789;
    costoTotal = 800;
}

void Reservacion::setFecha(string _fecha){
    fecha = _fecha;
}

string Reservacion::getFecha(){
    return fecha;
}

void Reservacion::setReserva(int _reserva){
    reserva = _reserva;
}

int Reservacion::getReserva(){
    return reserva;
}

void Reservacion::setCostoTotal(int _costoTotal){
    costoTotal = _costoTotal;
}

int Reservacion::getCostoTotal(){
    return costoTotal;
}


string Reservacion::mostrarInfoReservacion(Reservacion datosReservacion){
    string info = "\nInformacion de Reservacion\nFecha: " + getFecha();
    return info;
}
