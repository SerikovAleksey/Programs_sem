#include <iostream>
#include <map>
#include <vector>


class Polynomial {
public:

// Получение коэффициентов слагаемых и их степеней
    [[nodiscard]] const std::map<int, double> &getCoefficients() const {
        return coefficients;
    }

// Получение остатка от деления
    [[nodiscard]] const std::map<int, double> &getRemainderOfDivision() const {
        return remainder_of_division;
    }


// Конструктор по умолчанию
    Polynomial() {
        remainder_of_division[0] = 0;
}

// Конструктор полинома на основе контейнера map, где ключ - это степень слагаемого, а значение - это его коэффициент
    Polynomial(const std::map<int, double>& term) {
        for (auto i = std::begin(term); i != std::end(term); i++) {
            if (i->second == 0) continue;
            coefficients[i->first] = i->second;
        }
    }

// Функция удаления слагаемых с коэффициентом 0
    Polynomial DeleteZeros(Polynomial& polynomial) {
        std::vector<int> zeros;
        for (auto j = std::begin(polynomial.coefficients); j != std::end(polynomial.coefficients); j++) {
            if (j->second == 0) {
                zeros.push_back(j->first);
            }
        }
        for (int & zero : zeros) {
            polynomial.coefficients.erase(zero);
        }

        return polynomial;
    }

// Оператор сложения
    Polynomial operator+(Polynomial& addend) {
        Polynomial addition;
        for (auto i = std::begin(addend.coefficients); i != std::end(addend.coefficients); i++) {
            addition.coefficients[i->first] += i->second;
        }
        for (auto j = std::begin(this->coefficients); j != std::end(this->coefficients); j++) {
            addition.coefficients[j->first] += j->second;

        }
        DeleteZeros(addition);
        return addition;
    }

// Оператор вычитания
    Polynomial operator-(Polynomial& deductible) {
        Polynomial subtraction;
        for (auto i = std::begin(deductible.coefficients); i != std::end(deductible.coefficients); i++) {
            subtraction.coefficients[i->first] -= i->second;
        }
        for (auto j = std::begin(this->coefficients); j != std::end(this->coefficients); j++) {
            subtraction.coefficients[j->first] += j->second;

        }
        DeleteZeros(subtraction);
        return subtraction;
    }

// Оператор умножения полинома на полином
    Polynomial operator*(Polynomial& multiplier) {
        Polynomial multiplication;
        for (auto i = std::begin(multiplier.coefficients); i != std::end(multiplier.coefficients); i++) {
            for (auto j = std::begin(this->coefficients); j != std::end(this->coefficients); j++) {
                multiplication.coefficients[i->first + j->first] += i->second * j->second;
            }
        }
        DeleteZeros(multiplication);
        return multiplication;
    }

// Оператор умножения полином на число справа
    Polynomial operator*(double num) {
        Polynomial result;
        for (auto j = std::begin(this->coefficients); j != std::end(this->coefficients); j++) {
            result.coefficients[j->first] = num * j->second;
        }
        DeleteZeros(result);
        return result;
    }

// Оператор сравнения
    bool operator==(const Polynomial& polynomial) {
        if (polynomial.coefficients.size() != this->coefficients.size()) return false;
        for (auto i = std::begin(polynomial.coefficients); i != std::end(polynomial.coefficients); i++) {
            for (auto j = std::begin(this->coefficients); j != std::end(this->coefficients); j++) {
                if (i->second != j->second && i->first == i->first) return false;
            }
        }
        return true;
    }

// Оператор сравнения 2.0
    bool operator!=(const Polynomial& polynomial) {
        if (polynomial == *this) return false;
        return true;
    }

// Оператор равно
    Polynomial& operator=(const Polynomial& polynomial) {
        this->coefficients.clear();
        for (auto i = std::begin(polynomial.coefficients); i != std::end(polynomial.coefficients); i++){
            this->coefficients[i->first] = i->second;
        }
        return *this;
    }

// Функция дифференцирования с заданным порядком производной
    Polynomial Derivative(unsigned number_derivative) {
        Polynomial coef_derivative;
        for (auto j = 0u; j < number_derivative; j++) {
            for (auto i = std::begin(this->coefficients); i != std::end(this->coefficients); i++) {
                coef_derivative.coefficients[i->first - 1] = i->second * i->first;
            }
        }
        DeleteZeros(coef_derivative);
        return coef_derivative;
    }

// Функция взятия первообразной с заданным порядком
    Polynomial Antiderivative(unsigned number_antiderivative) {
        Polynomial coef_antiderivative;
        for (auto j = 0u; j < number_antiderivative; j++) {
            for (auto i = std::begin(this->coefficients); i != std::end(this->coefficients); i++) {
                coef_antiderivative.coefficients[i->first + 1] = i->second / (i->first + 1);
            }

        }
        DeleteZeros(coef_antiderivative);
        return coef_antiderivative;
    }

// Функция нужная для деления полиномов уголком (выполняет итерации вычитания полиномов)
    Polynomial Delete (Polynomial& divisible, Polynomial divider) {
        Polynomial result;
        auto i = std::rbegin(divisible.coefficients);
        auto j = std::rbegin(divider.coefficients);
        divider = divider * (i->second / j->second);
        if (std::rbegin(divisible.coefficients)->first - std::rbegin(divider.coefficients)->first >= 0) {
            for (auto k = std::begin(divider.coefficients); k != std::end(divider.coefficients); k++) {
                auto step = std::rbegin(divisible.coefficients)->first - std::rbegin(divider.coefficients)->first;
                result.coefficients[k->first + step] = k->second;
            }
        }
        divider.coefficients.clear();
        divider = result;
        result.coefficients.clear();
        result = divisible - divider;

        return result;
    }

// Функия деления полиномов уголком (с остатком)
    Polynomial operator/(Polynomial& divider) {
        Polynomial result;
        Polynomial remains = *this;

        for (; std::rbegin(remains.coefficients)->first >= std::rbegin(divider.coefficients)->first;) {
            auto i = std::rbegin(remains.coefficients);
            auto j = std::rbegin(divider.coefficients);
            result.coefficients[i->first - j->first] = i->second / j->second;
            remains = Delete(remains, divider);
        }
        result.remainder_of_division = remains.coefficients;
        std::cout << "This is the remains of the division -> ";
        for (auto elem: remains.coefficients) {
            std::cout << result.remainder_of_division[elem.first];
        }
        std::cout << std::endl;
        return result;
    }


// Оператор вывода
    friend std::ostream& operator<<(std::ostream&, Polynomial&);

private:

// Контейнер полинома, где ключ - степень, значение - коэффициент слагаемого
    std::map<int, double> coefficients;

// Контейнер нужный для деления, чтобы хранить остаток
    std::map<int, double> remainder_of_division;
};


// Реализация оператора вывода (постарался сделать по красоте)
std::ostream& operator<<(std::ostream& os, Polynomial& map) {
    for (auto i = std::rbegin(map.getCoefficients()); i != std::next(std::rbegin(map.getCoefficients())); i++) {
        if (i->first != 1 && i->second != 1 && i->first > 0 && i->second > 0) {
        os << i->second << "x^" << i->first;
        } else if (i->first == 1 && i->second != 1 && i->second > 0){
            os << i->second << "x";
        }else if (i->first == 1 && i->second == -1){
            os << "-x";
        } else if (i->first != 1 && i->first > 0 && i->second == 1) {
            os << "x^" << i->first;
        }else if (i->first != 1 && i->first > 0 && i->second == -1) {
            os << "-x^" << i->first;
        } else if (i->first == 0 && i->second != 0) {
            os << i->second;
        } else if (i->second == 0) {
            continue;
        }
        else os << "x";
    }
    for (auto i = std::next(std::rbegin(map.getCoefficients())); i != std::rend(map.getCoefficients()); i++) {
        if (i->first != 1 && i->second != 1 && i->first > 0 && i->second > 0) {
        os << "+" << i->second << "x^" << i->first;
        } else if (i->first == 1 && i->second != 1 && i->second > 0){
            os << "+" << i->second << "x";
        }else if (i->first == 1 && i->second != -1 && i->second < 0){
            os << i->second << "x";
        }else if (i->first == 1 && i->second == -1 ){
            os << "-x";
        } else if (i->first != 1 && i->first > 0 && i->second == 1) {
            os << "+x^" << i->first;
        } else if (i->first != 1 && i->first > 0 && i->second == -1) {
            os << "-x^" << i->first;
        } else if (i->first == 0 && i->second > 0) {
            os << "+" << i->second;
        }else if (i->first == 0 && i->second < 0) {
            os << i->second;
        } else if (i->second == 0) {
            continue;
        } else if (i->first < 0) {
            ;
        }
        else os << "x";
    }

    return os;
}




int main() {
    std::map<int, double> a = {{3, 5}, {1, 3}};
    std::map<int, double> b = {{2, 2}, {0, 3}};
    Polynomial aa = a;
    Polynomial bb = b;
    Polynomial cc;
    Polynomial dd ;
//    cc = aa.Derivative(1);
    dd = aa / bb;
    auto k = dd.getRemainderOfDivision();
//    std::cout << dd;
}