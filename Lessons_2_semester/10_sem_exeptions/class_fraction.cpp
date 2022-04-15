#include <iostream>
#include <string>
#include <map>
#include <algorithm>

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
    Rational reduction_of_fraction() {
        for (auto i = 2; i < 10; i++) {
            if (this->get_numerator() % i == 0 && this->get_denominator() % i == 0) {
//                std::cout << i << " " << frac.get_numerator() << " " << frac.get_denominator()%i;
                this->set_numerator(this->get_numerator()/i) ;
                this->set_denominator(this->get_denominator()/i);
                break;
            }
        }
        return *this;
    }

//    Оператор приведения типа класса к double
    explicit operator double() const {
        return (numerator * 1.)/denominator;
    }
    // - сложения двух дробей
    Rational operator+(Rational other) {
        Rational result_addition;
        result_addition.numerator = this->numerator * other.denominator + other.numerator * this->denominator;
        result_addition.denominator = this->denominator * other.denominator;
        return reduction_of_fraction();
    }
    // - вычитания двух дробей
    Rational operator-(Rational other) {
        Rational result_subtraction;
        result_subtraction.numerator = this->numerator * other.denominator - other.numerator * this->denominator;
        result_subtraction.denominator = this->denominator * other.denominator;
        return reduction_of_fraction();
    }
    // - умножения двух дробей
    Rational operator*(Rational other) {
        Rational result_multiplication;
        result_multiplication.numerator = this->numerator * other.numerator;
        result_multiplication.denominator = this->denominator * other.denominator;
        return reduction_of_fraction();
    }
    // - деления двух дробей
    Rational operator/(Rational other) {
        Rational result_division;
        result_division.numerator = this->numerator * other.denominator;
        result_division.denominator = this->denominator * other.numerator;
        return reduction_of_fraction();
    }
    // - умножения дроби на целое число (должно работать при любом порядке операндов)
    Rational operator*(int number) {
        Rational result_multiplication_by_int;
        result_multiplication_by_int.numerator = this->numerator * number;
        result_multiplication_by_int.denominator = this->denominator;
        return reduction_of_fraction();
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
//    Проверка на возможность сокращения дроби до целого числа
    if (fraction.get_numerator() % fraction.get_denominator() == 0) {
        return os << fraction.get_numerator() / fraction.get_denominator();
    }
    return os << fraction.get_numerator() << "/" << fraction.get_denominator();
}
//Ввод дроби
std::istream& operator>>(std::istream& is, Rational& fraction){
    std::string frac;
    std::getline(is, frac);
//    Создал переменную, чтобы отследить знак деления
    int check_symbol_didsion = 0;
//    Проверка на знак деления
    for (auto elem: frac) {
        if (elem == 47){
            check_symbol_didsion++;
        }
    }
//    Выбрасываю исключение
    if(check_symbol_didsion != 1) throw not_right_symbol_division("You should use a symbol division - '/' ");
//    Создаю дробь
    std::string num;
    for (auto item: frac) {
     if (item == 47){
         break;
     }
         num.push_back(item);
    }
//    Числитель
    auto numerator = std::stoi(num);
    fraction.set_numerator(numerator);

    std::string den;
    std::reverse(std::begin(frac), std::end(frac));
    for (auto item: frac) {
        if (item == 47){
            break;
        }
        den.push_back(item);
    }
//    Знаменатель
    auto denominator = std::stoi(den);
    fraction.set_denominator(denominator);

    fraction.reduction_of_fraction();
    return is;
}

// Оператор умножения слева на число
Rational operator*(int number, Rational& fraction) {
    Rational result_multiplication;
    result_multiplication.set_numerator(number * fraction.get_numerator());
    result_multiplication.set_denominator(fraction.get_denominator());
    return fraction.reduction_of_fraction();
}
using std::cout, std::endl;
int main()
{
    Rational a(1, 2);
    Rational b(2, 3);
    Rational c;

    std::cin >> c;
    double s = double(c);
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