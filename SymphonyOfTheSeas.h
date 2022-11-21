#include <iostream>
using namespace std;

#include <string>

class SymphonyOfTheSeas
{
    private:
        string PerfectStorm;
        string LaserTag;
        string FlowRider;

    public:
        SymphonyOfTheSeas();
        void setPerfectStorm(string);
        string getPerfectStorm();
        void setLaserTag(string);
        string getLaserTag();
        void setFlowRider(string);
        string getFlowRider();
        string mostrarInfoSymphony(SymphonyOfTheSeas);

};
