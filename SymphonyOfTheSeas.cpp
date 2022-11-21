#include "SymphonyOfTheSeas.h"

SymphonyOfTheSeas::SymphonyOfTheSeas()
{
    PerfectStorm = "Toboganes Info";
    LaserTag = "Laser Tag Info";
    FlowRider = "Simulador de Surf Info";
}

void SymphonyOfTheSeas::setPerfectStorm(string _PerfectStorm){
    PerfectStorm = _PerfectStorm;
}

string SymphonyOfTheSeas::getPerfectStorm(){
    return PerfectStorm;
}

void SymphonyOfTheSeas::setLaserTag(string _LaserTag){
    LaserTag = _LaserTag;
}

string SymphonyOfTheSeas::getLaserTag(){
    return LaserTag;
}

void SymphonyOfTheSeas::setFlowRider(string _FlowRider){
    FlowRider = _FlowRider;
}

string SymphonyOfTheSeas::getFlowRider(){
    return FlowRider;
}


string SymphonyOfTheSeas::mostrarInfoSymphony(SymphonyOfTheSeas barco2){
    string info = "\nInformacion Symphony Of The Seas\nPerfect Storm: "+getPerfectStorm()+"\nLaser Tag: "+getLaserTag()+"\nFlow Rider: "+getFlowRider();
    return info;
}
