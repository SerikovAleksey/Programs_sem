//Control questions:

// 1) Инкапсуляция - ограничение доступа к коду (private), с целью его сохранения, чтобы пользователь его не поломал.
//     Наследование - способ создания класса на основе класса, созданного ранее.
//     Полиморфизм - способ работать с несколькими типами как с одним, но у каждого своё поведение.
//     Абстракция - способ оградить пользователя от знания как устроен код.

// 2) Public - способ предоставления методов пользователю.
//    Private - способ ограничить доступ к данным, чтобы нельзя было обращаться к ним из вне.
//    Friend - используется для создания дружественной функции, которая может обращаться к полям класса вне самого класса.

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

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

class Sphere
{
public:
    // Конструктор сферы с центром в точке center и радиусом r
    Sphere(const Point& center, double r): x(center.x()), y(center.y()), z(center.z()), r(r){}

    // Проверка, попадает ли заданная точка p в данную сферу.
    // (Расстояния сравнивать с точностью 1e-6.)
    bool covers(const Point& p) const {
        if (std::sqrt((p.x() - x)*(p.x() - x) + (p.y() - y)*(p.y() - y) + (p.z() - z)*(p.z() - z)) - r <= 0) return true;
        return false;
    }
private:
    std::vector<Point> points;
    double x, y, z, r;
    double e = 1e-6;
};

int main () {
    // Создаём сферу
    Point center(10.0, 10.0, 10.0);
    Sphere s(center, 0.5);

    // Создаём пару тестовых точек
    Point p1(10.1, 10.1, 10.1);
    Point p2(2, 2, 2);

    // Ожидаем, что первая точка внутри сферы
    cout << boolalpha << s.covers(p1) << endl;
    // Ожидаем, что вторая точка не попала внутрь сферы
    cout << boolalpha << s.covers(p2) << endl;
}