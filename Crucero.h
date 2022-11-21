#include <iostream>
using namespace std;

#include <string>

class Crucero
{
    private:
        string rutaViaje;
        string habitacion;
        string comida;
        string lineaCrucero;
        string costo;

    public:
        Crucero();
        void setRutaViaje(string);
        string getRutaViaje();
        void setHabitacion(string);
        string getHabitacion();
        void setComida(string);
        string getComida();
        void setLineaCrucero(string);
        string getLineaCrucero();
        void setCosto(string);
        string getCosto();
        string mostrarInfoCrucero(Crucero);

};

