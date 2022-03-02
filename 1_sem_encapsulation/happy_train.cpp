#include <iostream>

using namespace std;
class Train
{
public:
    Train(double mass, double coor, double speed) {
        setCoor(coor);
        setSpeed(speed);

    }

    void setCoor(double coor) {
        Train::coor = coor;
    }

    void setSpeed(double speed) {
        Train::speed = speed;
    }

    Train(double mass){
        Train::mass = mass;
    }
    void move(double dt) {
        coor += speed * dt;
    }

    void accelerate(double dp) {
        speed += dp / mass;
    }

    double getX(){
        return  coor;
    }

private:
    double mass;
    double speed = 0.;
    double coor = 0. ;
};

int main () {
    Train t(10);
    t.accelerate(1); // Скорость стала 0.1
    t.move(1);
    cout << "Current X: " << t.getX() << endl;
    t.move(1);
    cout << "Current X: " << t.getX() << endl;
    t.accelerate(-2); // Скорость стала -0.1
    t.move(3);
    cout << "Current X: " << t.getX() << endl;
}