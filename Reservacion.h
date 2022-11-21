#include <iostream>
using namespace std;

#include <string>

class Reservacion
{
    private:
        string fecha;
        int reserva;
        int costoTotal;

    public:
        Reservacion();
        void setFecha(string);
        string getFecha();
        void setReserva(int);
        int getReserva();
        void setCostoTotal(int);
        int getCostoTotal();
        string mostrarInfoReservacion(Reservacion);
};
