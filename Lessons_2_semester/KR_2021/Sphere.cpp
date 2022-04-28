class Point
{
protected:
    double _x;
    double _y;
    double _z;

public:
    Point(double x, double y, double z): _x(x), _y(y), _z(z) {
    }

    double x() const {
        return _x;
    }

    double y() const {
        return _y;
    }

    double z() const {
        return _z;
    }
};

#include <cmath>

class Sphere
{
public:
    // Конструктор сферы с центром в точке center и радиусом r
    Sphere(const Point& center, double r): r(r), center(center){}

    // Проверка, попадает ли заданная точка p в данную сферу.
    // (Расстояния сравнивать с точностью 1e-6.)
    bool covers(const Point& p) const{
        return std::sqrt(std::pow(center.x() - p.x(), 2) +
                            std::pow(center.y() - p.y(), 2) +
                            std::pow(center.z() - p.z(), 2)) < r;
    }
private:
    double r;
    Point center;
};