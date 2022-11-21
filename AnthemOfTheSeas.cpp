#include "AnthemOfTheSeas.h"

AnthemOfTheSeas::AnthemOfTheSeas()
{
    RipcordIFLY = "Skydiving Info";
    BumperCars = "Bumper Cars Info";
    NorthStar = "Observatorio Info";
}

void AnthemOfTheSeas::setRipcordIFLY(string _RipcordIFLY){
    RipcordIFLY= _RipcordIFLY;
}

string AnthemOfTheSeas::getRipcordIFLY(){
    return RipcordIFLY;
}

void AnthemOfTheSeas::setBumperCars(string _BumperCars){
    BumperCars= _BumperCars;
}

string AnthemOfTheSeas::getBumperCars(){
    return BumperCars;
}

void AnthemOfTheSeas::setNorthStar(string _NorthStar){
    NorthStar = _NorthStar;
}

string AnthemOfTheSeas::getNorthStar(){
    return NorthStar;
}


string AnthemOfTheSeas::mostrarInfoAnthem(AnthemOfTheSeas barco1){
    string info = "\nInformacion Anthem Of The Seas\nRipcord by IFLY: "+getRipcordIFLY()+"\nBumper Cars: "+getBumperCars()+"\nNorth Star: "+getNorthStar();
    return info;
}
