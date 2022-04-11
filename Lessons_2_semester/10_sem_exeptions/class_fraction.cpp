#include <iostream>
#include <string>
#include <map>

// Класс исключений для неправильного знака деления
class not_right_symbol_division : public std::exception{
public:
    explicit not_right_symbol_division(const std::string& message): eror_message(message){};
    const char* what() const noexcept override {
        return eror_message.c_str();
    }
private:
    std::string eror_message;
};
// Класс исключений для деления на ноль
class cannot_divide_by_zero : public std::exception{
public:
    explicit cannot_divide_by_zero(const std::string& message): eror_message(message){};
    const char* what() const noexcept override {
        return eror_message.c_str();
    }
private:
    std::string eror_message;
};

//Класс дроби
class Rational {
public:
    // Конструктор дроби, здесь a - числитель, b - знаменатель
    Rational(int a, int b): numerator(a), denominator(b){
        if (denominator == 0) {
            throw cannot_divide_by_zero("You can't divide by zero");
        }
    };
//    Конструктор по умолчанию
    Rational() = default;
//    Получение числителя
    int get_numerator() const{
        return numerator;
    }
//    Получение знаменателя
    int get_denominator() const{
            return denominator;
    }
//    Изменение числителя
    void set_numerator(int num) {
            numerator = num;
    }
//    Изменение знаменателя
    void set_denominator(int den) {
        denominator = den;
//        Проверка на ноль в знаменателе
        if (denominator == 0) {
            throw cannot_divide_by_zero("You can't divide by zero");
        }
    }
//    Упрощение дроби
    Rational reduction_of_fraction(Rational& frac) {
        for (auto i = 2; i < 10; i++) {
            if (frac.get_numerator() % i == 0 && frac.get_denominator() % i == 0) {
//                std::cout << i << " " << frac.get_numerator() << " " << frac.get_denominator()%i;
                frac.set_numerator(frac.get_numerator()/i) ;
                frac.set_denominator(frac.get_denominator()/i);
                break;
            }
        }
        return frac;
    }

//    Оператор приведения типа класса к double
    operator double() const {
        return (numerator/denominator);
    }
    // - сложения двух дробей
    Rational operator+(Rational other) {
        Rational result_addition;
        result_addition.numerator = this->numerator * other.denominator + other.numerator * this->denominator;
        result_addition.denominator = this->denominator * other.denominator;
        return reduction_of_fraction(result_addition);
    }
    // - вычитания двух дробей
    Rational operator-(Rational other) {
        Rational result_subtraction;
        result_subtraction.numerator = this->numerator * other.denominator - other.numerator * this->denominator;
        result_subtraction.denominator = this->denominator * other.denominator;
        return reduction_of_fraction(result_subtraction);
    }
    // - умножения двух дробей
    Rational operator*(Rational other) {
        Rational result_multiplication;
        result_multiplication.numerator = this->numerator * other.numerator;
        result_multiplication.denominator = this->denominator * other.denominator;
        return reduction_of_fraction(result_multiplication);
    }
    // - деления двух дробей
    Rational operator/(Rational other) {
        Rational result_division;
        result_division.numerator = this->numerator * other.denominator;
        result_division.denominator = this->denominator * other.numerator;
        return reduction_of_fraction(result_division);
    }
    // - умножения дроби на целое число (должно работать при любом порядке операндов)
    Rational operator*(int number) {
        Rational result_multiplication_by_int;
        result_multiplication_by_int.numerator = this->numerator * number;
        result_multiplication_by_int.denominator = this->denominator;
        return reduction_of_fraction(result_multiplication_by_int);
    }
//    Операторы вывода и ввода
    friend std::ostream& operator<<(std::ostream& , const Rational&);
    friend std::istream& operator>>(std::istream& , Rational&);
private:
    int numerator;
    int denominator;
};

//Вывод дроби
std::ostream& operator<<(std::ostream& os, const Rational& fraction){
    return os << fraction.get_numerator() << "/" << fraction.get_denominator();
}
//Ввод дроби
std::istream& operator>>(std::istream& is, Rational& fraction){
    std::string frac;
    std::getline(is, frac);
    if (frac[1] != 47) throw not_right_symbol_division("You should use a symbol division - '/' ");
    fraction.set_numerator(frac[0] - '0');
    fraction.set_denominator(frac[2] - '0');
    if (frac[2] - '0' == 0) {
        throw cannot_divide_by_zero("You can't divide by zero");
    }
    return is;
}

// Оператор умножения слева на число
Rational operator*(int number, Rational& fraction) {
    Rational result_multiplication;
    result_multiplication.set_numerator(number * fraction.get_numerator());
    result_multiplication.set_denominator(fraction.get_denominator());
    return fraction.reduction_of_fraction(result_multiplication);
}
using std::cout, std::endl;
int main()
{
    Rational a(1, 2);
    Rational b(2, 3);
    Rational c;

    std::cin >> c;
    double s = c;
    cout << c << endl;
    cout << s << endl;
    cout << a << endl;
    cout << b << endl;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << 3 * a << endl;
    cout << b * 4 << endl;

    return 0;
}