#include "CruceroMediterranean.h"

//Inicializar metodos

//Constructor
CruceroMediterranean::CruceroMediterranean()
{
    //ctor
}

CruceroMediterranean::~CruceroMediterranean()
{
    //dtor
}

//Metodo herencia
CruceroMediterranean::CruceroMediterranean(string _lineaCrucero, int _costo, string _rutaCrucero, string _fecha, string _habitacion, string _BumperCars, string _Ripcord, string _NorthStar):Crucero(_lineaCrucero,_costo, _rutaCrucero, _fecha, _habitacion)
{
    BumperCars = _BumperCars;
    Ripcord = _Ripcord;
    NorthStar = _NorthStar;
}

void CruceroMediterranean::setBumperCars(string _BumperCars){
    BumperCars = _BumperCars;
}

string CruceroMediterranean::getBumperCars(){
    return BumperCars;
}

void CruceroMediterranean::setRipcord(string _Ripcord){
    Ripcord = _Ripcord;
}

string CruceroMediterranean::getRipcord(){
    return Ripcord;
}

void CruceroMediterranean::setNorthStar(string _NorthStar){
    NorthStar = _NorthStar;
}

string CruceroMediterranean::getNorthStar(){
    return NorthStar;
}


//Muestra todos los datos declarados del Crucero Caribbean.
void CruceroMediterranean::mostrarMediterranean(){
    mostrarCrucero();
    cout <<"Dentro del barco podras disfrutar de: "<<endl;
    cout<<"Bumper Cars- "<<BumperCars<<endl;
    cout<<"Ripcord by IFLY- "<<Ripcord<<endl;
    cout<<"North Star- "<<NorthStar<<endl;
}
