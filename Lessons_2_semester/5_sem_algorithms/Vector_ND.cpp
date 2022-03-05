#include <iostream>
#include <vector>

class VectorN
{
public:
    // Конструктор вектора размерности n
    VectorN() = default;
    VectorN(unsigned int n){
        coor.resize(n);
    }

    // Получение размерности вектора
    unsigned getSize() const{
        return coor.size();
    }

    // Получение значения i-ой координаты вектора,
    // i находится в диапазоне от 0 до n-1
    int getValue(unsigned int i) const{
        return coor[i];
    }

    // Задание значения i-ой координаты вектора равным value,
    // i находится в диапазоне от 0 до n-1
    void setValue(unsigned int i, int value){
        coor[i] = value;
    }


    bool operator== (const VectorN& b) const {
        for (auto i = 0u; i < b.getSize(); i++) {
            if (this->getValue(i) != b.getValue(i)) {
                return false;
            }
        }
        return true;
    }
    bool operator!= (const VectorN& b) const {
        if (!operator==(b)) return true;
        return false;
    }
    VectorN operator+ (const VectorN& v) const {
        VectorN c(v.getSize());
        for (auto i = 0u; i < v.getSize(); i++) {
            c.setValue(i, (this->getValue(i) + v.getValue(i)));
        }
        return c;
    }
    VectorN operator* (const int a) const {
        VectorN c(this->getSize());
        for (auto i = 0u; i < this->getSize(); i++) {
            c.setValue(i, this->getValue(i) * a);
        }
        return c;
    }

private:
    std::vector<int> coor;
};
VectorN operator* (int a, const VectorN& v) {
    VectorN c(v.getSize());
    for (auto i = 0u; i < v.getSize(); i++) {
        c.setValue(i, v.getValue(i) * a);
    }
    return c;
}
using namespace std;
int main () {
    VectorN a(4);
    a.setValue(0, 0);
    a.setValue(1, 1);
    a.setValue(2, 2);
    a.setValue(3, 3);

    VectorN b(4);
    b.setValue(0, 0);
    b.setValue(1, -1);
    b.setValue(2, -2);
    b.setValue(3, -3);

    cout << (a == b) << endl;
    cout << (a != b) << endl;

    VectorN c = a + b;
    VectorN d = 5 * c;

    for(unsigned int i = 0; i < a.getSize(); ++i)
        cout << d.getValue(i) << endl;

}