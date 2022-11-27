#include "CruceroCaribbean.h"

//Inicializar metodos

//Constructor
CruceroCaribbean::CruceroCaribbean()
{

}

CruceroCaribbean::~CruceroCaribbean()
{
    //dtor
}

//Metodo herencia
CruceroCaribbean::CruceroCaribbean(string _lineaCrucero, int _costo, string _rutaCrucero, string _fecha, string _habitacion, string _PerfectStorm, string _LaserTag, string _FlowRider):Crucero(_lineaCrucero,_costo, _rutaCrucero, _fecha, _habitacion)
{
    PerfectStorm = _PerfectStorm;
    LaserTag = _LaserTag;
    FlowRider = _FlowRider;
}

void CruceroCaribbean::setPerfectStorm(string _PerfectStorm){
    PerfectStorm = _PerfectStorm;
}

string CruceroCaribbean::getPerfectStorm(){
    return PerfectStorm;
}

void CruceroCaribbean::setLaserTag(string _LaserTag){
    LaserTag = _LaserTag;
}

string CruceroCaribbean::getLaserTag(){
    return LaserTag;
}

void CruceroCaribbean::setFlowRider(string _FlowRider){
    FlowRider = _FlowRider;
}

string CruceroCaribbean::getFlowRider(){
    return FlowRider;
}

//Muestra todos los datos declarados del Crucero Caribbean.
void CruceroCaribbean::mostrarCaribbean(){
    mostrarCrucero();
    cout <<"Dentro del barco podras disfrutar de: "<<endl;
    cout<<"Perfect Storm- "<<PerfectStorm<<endl;
    cout<<"Laser Tag- "<<LaserTag<<endl;
    cout<<"Flow Rider- "<<FlowRider<<endl;
}
