#include <iostream>

template<typename Vector>
class Vector2D
{
public:
    // Конструкторы
    Vector2D() = default;
    Vector2D(Vector x, Vector y):x(x), y(y){}

//     Получение координат
    Vector getX() const {
        return x;
    }
    Vector getY() const {
        return y;
    }

    // Задание координат
    void setX(Vector x) {
        this->x = x;
    }
    void setY(Vector y) {
        this->y = y;
    }

    // Перегруженный оператор - сравнение двух векторов на равенство
    bool operator== (const Vector2D& v2) const {
        return x == v2.x && y == v2.y;
    }

    // Ещё один перегруженный оператор - неравенство векторов
    // Да, это отдельный оператор! Хинт - настоящие джедаи смогут для != использовать уже написанное ==
    bool operator!= (const Vector2D& v2) const {
        if (!operator==(v2)) return true;
        return false;
    }

    // Сумма двух векторов, исходные вектора не меняются, возвращается новый вектор
    Vector2D operator+ (const Vector2D& v2) const {
        Vector2D v3;
        v3.x = x + v2.x;
        v3.y = y + v2.y;
        return v3;
    }

    // Вычитание векторов, исходные вектора не меняются, возвращается новый вектор
    Vector2D operator- (const Vector2D& v2) const{
        Vector2D v3;
        v3.x = x - v2.x;
        v3.y = y - v2.y;
        return v3;
    }

    // Оператор умножения вектора на скаляр, исходный вектор не меняется, возвращается новый вектор
    Vector2D operator* (const int a) const{
        Vector2D v3;
        v3.x = x * a;
        v3.y = y * a;
        return v3;
    }

    template<typename T>
    friend std::ostream& operator<<(std::ostream&, const Vector2D<T>&);

private:
    Vector x, y;
};

// Оператор умножения скаляра на вектор, исходный вектор не меняется, возвращается новый вектор
// Неожиданно, правда? Умножение скаляра на вектор - это отдельный оператор, причём описанный *вне* класса.
template<typename T>
Vector2D<T> operator* (int a, const Vector2D<T>& v){
    Vector2D<T> v3;
    v3.setX(a * v.getX());
    v3.setY(a * v.getY());
    return v3;
}

// Вывод вектора, ожидается строго в формате (1; 1)
template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector2D<T>& v){
    return os << "(" << v.getX() <<"; " << v.getY() << ")";
}

// Чтение вектора, читает просто две координаты без хитростей
template<typename T>
std::istream& operator>>(std::istream &is, Vector2D<T> &v) {
   T x, y;
    is >> x >> y;
   v.setX(x);
   v.setY(y);
    return is;
}

using namespace std;
int main () {
    Vector2D<int> v1;
    cin >> v1;
    cout << "Read vector: " << v1 << endl;
    cout << "Vector multiplied by 42: " << v1 * 42 << endl;

    Vector2D<double> v2;
    cin >> v2;
    cout << "Read vector: " << v2 << endl;
    cout << "Vector multiplied by 42: " << 42 * v2 << endl;
}