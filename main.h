#include <iostream>
#include "Persona.h"
#include "Crucero.h"
#include "Reservacion.h"
#include "AnthemOfTheSeas.h"
#include "SymphonyOfTheSeas.h"

using namespace std;

int main()
{
    Persona pasajero;
    cout<<pasajero.mostrarInfoPersona(pasajero)<<endl;

    Crucero datosCrucero;
    cout<<datosCrucero.mostrarInfoCrucero(datosCrucero)<<endl;

    Reservacion datosReservacion;
    cout<<datosReservacion.mostrarInfoReservacion(datosReservacion)<<endl;

    AnthemOfTheSeas barco1;
    cout<<barco1.mostrarInfoAnthem(barco1)<<endl;

    SymphonyOfTheSeas barco2;
    cout<<barco2.mostrarInfoSymphony(barco2)<<endl;

    return 0;
}
