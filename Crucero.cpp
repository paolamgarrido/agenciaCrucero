#include "Crucero.h"

//Inicializar metodos

//Constructor
Crucero::Crucero()
{

}

Crucero::~Crucero()
{
    //dtor
}

Crucero::Crucero(string _lineaCrucero,int _costo, string _rutaCrucero, string _fecha, string _habitacion)
{
    lineaCrucero = _lineaCrucero;
    costo = _costo;
    rutaCrucero = _rutaCrucero;
    fecha = _fecha;
    habitacion = _habitacion;
}

void Crucero::setLineaCrucero(string _lineaCrucero){
    lineaCrucero = _lineaCrucero;
}

string Crucero::getLineaCrucero(){
    return lineaCrucero;
}

void Crucero::setRutaCrucero(string _rutaCrucero){
    rutaCrucero = _rutaCrucero;
}

string Crucero::getRutaCrucero(){
    return rutaCrucero;
}

void Crucero::setFecha(string _fecha){
    fecha = _fecha;
}

string Crucero::getFecha(){
    return fecha;
}

void Crucero::setHabitacion(string _habitacion){
    habitacion = _habitacion;
}

string Crucero::getHabitacion(){
    return habitacion;
}

void Crucero::setCosto(int _costo){
    costo = _costo;
}

int Crucero::getCosto(){
    return costo;
}

//Muestra todos los datos declarados del crucero.
void Crucero::mostrarCrucero(){
    cout<<"Linea Crucero: "<<lineaCrucero<<endl;
    cout<<"Habitacion: "<<habitacion<<endl;
    cout<<"Ruta Crucero: "<<rutaCrucero<<endl;
    cout<<"Salida: "<<fecha<<endl;
    cout<<"Costo: "<<costo<<" USD"<<endl;
}
