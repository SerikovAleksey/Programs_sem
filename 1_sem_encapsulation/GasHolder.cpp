#include <iostream>

using namespace std;


class GasHolder
{
public:

    GasHolder(float v) {
        this->V = v;
    }

    void inject(float m, float M){
        r += m / M;
    }


    void heat(float dT){
        T += dT;
    }


    void cool(float dT){
        dT > T ? T = 0 : T -= dT;
    }


    float getPressure() {
        return r * R * T / V;
    }

private:
    float V, P;
    float R = 8.31;
    float T = 273;
    float r = 0;
};

int main () {
    GasHolder h(1.0);
    h.inject(29, 29);
    cout << "Pressure after operation: " << h.getPressure() << " Pa" << endl;
    h.inject(29, 29);
    cout << "Pressure after operation: " << h.getPressure() << " Pa" << endl;
    h.heat(273);
    cout << "Pressure after operation: " << h.getPressure() << " Pa" << endl;
    h.cool(373);
    cout << "Pressure after operation: " << h.getPressure() << " Pa" << endl;
    h.cool(373);
    cout << "Pressure after operation: " << h.getPressure() << " Pa" << endl;
}