//Theory:
//1.1. На основе мн-ва:
//    vector (добавление в конец за О(1), обращение к элементам за О(N)
//    array (статический массив)
//    deque (как vector+ добавление в начало за О(1))
//1.2. На основе узлов:
//    list (за константное время добавление элементов в середину, перемещение элементов)
//    forward_list (как list, но элементы имеют указатель только на следующий элемент)
//1.3. На основе деревьев:
//     set (упорядоченность и уникальность элементов)
//     multi_set (как set, но без уникальных элементов)
//     map (пары элементов:ключ и значение, уникальность и упорядоченность ключей)
//     multi_map (как map, но без уникальности ключей)
//1.4. На основе Hash-таблиц:
//     содержат ключ и значение, обращение по ключу за константу, но затрата памяти большая, не хранит дубли, коллизии)
//

#include <vector>
#include "iostream"
#include "cmath"

class Base {
public:
    virtual double Perimeter () = 0;
    virtual double Area() = 0;
};

class Ellipse : public Base {
public:
    Ellipse(double a, double b): a(a), b(b){}
    double Perimeter() override{
       return  4 * ((acos(-1) * a * b + std::pow((a - b),2))/(a + b));
    }
    double Area() override{
        return acos(-1) * a * b;
    }
    friend std::ostream& operator<<(std::ostream&, Ellipse);
private:
    double a;
    double b;
};

std::ostream& operator<<(std::ostream& out, Ellipse figure){
    return out << figure.Area() << std::endl << figure.Perimeter() << std::endl;
}

class Circle : public Ellipse {
public:
    Circle(double R): Ellipse(R, R){}
};

class Quadrilateral: public Base{
public:
    Quadrilateral(double a, double b, double c, double d):a(a), b(b), c(c), d(d){}
    double Perimeter() override{
        return a + b + c + d;
    }
//    приближенная формула (высокая точность, если четырехугольник близок к прямоугольнику)
    double Area() override {
        return (a + c) * (b + d) / 4;
    }
    friend std::ostream& operator<<(std::ostream&, Quadrilateral);
private:
    double a, b, c, d;
};
std::ostream& operator<<(std::ostream& out, Quadrilateral figure){
    return out << figure.Area() << std::endl << figure.Perimeter() << std::endl;
}

class Rectangle: public Quadrilateral {
public:
    Rectangle(double a, double b): Quadrilateral(a, b, a, b){}
};

class Square: public Rectangle {
public:
    Square(double a): Rectangle(a, a){}
};

class Triangle: public Base {
public:
    Triangle(double a, double b, double c):a(a), b(b), c(c){}
    double Perimeter() override {
        return a + b + c;
    }
    double Area() override {
        double p = (a + b + c) / 2;
        return std::sqrt(p * (p - a) * (p - b) * (p - c));
    }
    friend std::ostream& operator<<(std::ostream&, Triangle);
private:
    double a, b, c;
};
std::ostream& operator<<(std::ostream& out, Triangle figure){
    return out << figure.Area() << std::endl << figure.Perimeter() << std::endl;
}

int main () {
    std::vector<Base*> array;
    Ellipse first(5, 10);
    Circle second(2);
    Quadrilateral third(1, 2, 3, 4);
    Rectangle fourth(2, 7);
    Triangle fifth(3, 4, 5);
    array.push_back(&first);
    array.push_back(&second);
    array.push_back(&third);
    array.push_back(&fourth);
    array.push_back(&fifth);
    for (auto elem : array){
        std::cout <<"Perimetr is "<< elem->Perimeter() << std::endl << "Area is " << elem->Area() << std::endl;
    }
//    std::cout <<first << second << third << fourth << fifth;
}