#include "Reservacion.h"

//Inicializar metodos

//Constructor
Reservacion::Reservacion()
{

}


Reservacion::~Reservacion()
{
    //dtor
}

Reservacion::Reservacion(int _numReserva,string _nombreBarco,string _nombreReserva,string _nombreLinea,Persona _nombre,Crucero _linea)
{
    numReserva = _numReserva;
    nombreBarco = _nombreBarco;
    nombreReserva = _nombreReserva;
    nombreLinea = _nombreLinea;
    _nombre.getNombre();
   _linea.getLineaCrucero();
}

void Reservacion::setNumReserva(int _numReserva){
    numReserva = _numReserva;
}

int Reservacion::getNumReserva(){
    return numReserva;
}

void Reservacion::setNomBarco(string _nombreBarco){
    nombreBarco = _nombreBarco;
}

string Reservacion::getNomBarco(){
    return nombreBarco;
}

void Reservacion::setNomReserva(string _nombreReserva){
    nombreReserva = _nombreReserva;
}

string Reservacion::getNomReserva(){
    return nombreReserva;
}

void Reservacion::setNomLinea(string _nombreLinea){
    nombreLinea = _nombreLinea;
}

string Reservacion::getNomLinea(){
    return nombreLinea;
}

//Metodos de composición
void Reservacion::guardarNomReserva(Persona _nombre){
    nombreReserva = _nombre.getNombre();
}

void Reservacion::guardarLineaCrucero(Crucero _linea){
    nombreLinea = _linea.getLineaCrucero();
}

//Muestra todos los datos declarados de la reservación.
void Reservacion::mostrarInfoReservacion(){
    cout<<"Nombre de reserva: "<<nombreReserva<<endl;
    cout<<"Numero de reserva: "<<numReserva<<endl;
    cout<<"Linea Crucero: "<<nombreLinea<<endl;
    cout<<"Barco: "<<nombreBarco<<endl;
}
