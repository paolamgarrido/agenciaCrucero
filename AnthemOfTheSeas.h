#include <iostream>
using namespace std;

#include <string>

class AnthemOfTheSeas
{
    private:
        string RipcordIFLY;
        string BumperCars;
        string NorthStar;

    public:
        AnthemOfTheSeas();
        void setRipcordIFLY(string);
        string getRipcordIFLY();
        void setBumperCars(string);
        string getBumperCars();
        void setNorthStar(string);
        string getNorthStar();
        string mostrarInfoAnthem(AnthemOfTheSeas);

};
