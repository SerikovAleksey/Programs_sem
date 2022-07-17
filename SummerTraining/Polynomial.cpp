#include <iostream>
#include <vector>


class Polynomial {
public:

// Получение коэффициентов слагаемых
    [[nodiscard]] const std::vector<double> &getCoefficients() const {
        return coefficients;
    }

// Конструктор по умолчанию
    Polynomial() = default;

// Получение остатка от деления
    [[nodiscard]] const std::vector<double> &getRemainsOfDivision() const {
        return remainsOfDivision;
    }

// Конструктор полинома на основе контейнера vector, где индекс - это степень слагаемого, а значение - это его коэффициент
    Polynomial(std::vector<double> p1) {
        coefficients.resize(p1.size());
        for (auto i = 0u; i < p1.size(); i++) {
            coefficients[i] = p1[i];
        }
    }

// Оператор сложения
    Polynomial operator+(Polynomial& p2) {
        Polynomial p3;
        unsigned size = std::max(p2.coefficients.size(), this->coefficients.size());
        p3.coefficients.resize(size);
        p2.coefficients.resize(size);
        this->coefficients.resize(size);
        for (auto j = 0u; j < size; j++) {
            p3.coefficients[j] = p2.coefficients[j] + this->coefficients[j];
        }
        return p3;
    }

// Оператор вычитания
    Polynomial operator-(Polynomial& p2) {
        Polynomial p3;
        unsigned size = std::max(p2.coefficients.size(), this->coefficients.size());
        p3.coefficients.resize(size);
        p2.coefficients.resize(size);
        this->coefficients.resize(size);
        for (auto j = 0u; j < size; j++) {
            p3.coefficients[j] = this->coefficients[j] - p2.coefficients[j];
        }
        return p3;
    }

// Оператор умножения полинома на полином
    Polynomial operator*(const Polynomial& p2) {
        Polynomial p3;
        p3.coefficients.resize(p2.coefficients.size() + this->coefficients.size());
        std::transform(std::begin(p3.coefficients), std::end(p3.coefficients),
                       std::begin(p3.coefficients),
                       [](auto elem){return 0;});
        for (auto i = 0u; i < p2.coefficients.size(); i++) {
            for (auto j = 0u; j < this->coefficients.size(); j++) {
                p3.coefficients[i + j] += p2.coefficients[i] * this->coefficients[j];
            }
        }
        return p3;
    }

// Оператор умножения полинома на число справа
    Polynomial operator*(double num) {
        Polynomial result;
        result.coefficients.resize(this->coefficients.size());
        std::transform(std::begin(this->coefficients), std::end(this->coefficients),
                       std::begin(result.coefficients),
                       [num](auto elem){return elem * num;});
        return result;
    }

// Функция удаления последних слагаемых с коэффициентом 0
    Polynomial DeleteZeros(Polynomial& polynomial) {
        auto to_delete = std::remove_if(std::prev(std::end(polynomial.coefficients)), std::end(polynomial.coefficients),
                                        [](auto element){return element == 0;});
        polynomial.coefficients.erase(to_delete, std::end(polynomial.coefficients));
        return polynomial;
    }

//  Оператор деления уголком
    Polynomial operator/(Polynomial divider) {
        Polynomial result;
        Polynomial remains = *this;
        Polynomial helper = divider;
        result.coefficients.resize(remains.coefficients.size() - divider.coefficients.size() + 1);

        for (auto k = 0u; k < remains.coefficients.size() - divider.coefficients.size(); k++) {
            divider.coefficients.insert(std::begin(divider.coefficients), 0);
        }

        for (; remains.coefficients.size() >= helper.coefficients.size();) {

            auto i = *std::rbegin(remains.coefficients);
            auto j = *std::rbegin(helper.coefficients);
            result.coefficients[remains.coefficients.size() - helper.coefficients.size()] = i / j;
            divider = helper * (i / j);
            for (auto k = 0u; k < remains.coefficients.size() - helper.coefficients.size(); k++) {
                divider.coefficients.insert(std::begin(divider.coefficients), 0);
            }

            remains = remains - divider;
            DeleteZeros(remains);

        }
        remainsOfDivision.resize(remains.coefficients.size());
        for (auto k = 0u; k < remains.coefficients.size(); k++) {
            remainsOfDivision[k] = remains.coefficients[k];
        }
//        std::cout << "This is the remains of the division -> " << remains << std::endl;
        return result;
    }

// Оператор сравнения
    bool operator==(const Polynomial& p2) {
        if (p2.coefficients.size() != this->coefficients.size()) return false;
        for (auto i = 0u; i < p2.coefficients.size(); i++) {
            if (p2.coefficients[i] != this->coefficients[i]) return false;
        }
        return true;
    }

// Оператор сравнения 2.0
    bool operator!=(const Polynomial& p2) {
        if (p2 == *this) return false;
        return true;
    }

// Оператор равно
    Polynomial& operator=(const Polynomial& p2) {
        this->coefficients.clear();
        this->coefficients.resize(p2.coefficients.size());
        for (auto j = 0u; j < p2.coefficients.size(); j++) {
            this->coefficients[j] = p2.coefficients[j];
        }
        return *this;
    }

// Функция дифференцирования с заданным порядком производной
    Polynomial Derivative(unsigned number_derivative) {
        for (auto j = 0u; j < number_derivative; j++) {
            std::vector<double> coef_derivative(this->coefficients.size() - 1);
            for (int i = 0; i < coef_derivative.size(); i++) {
                coef_derivative[i] = this->coefficients[i + 1] * (i + 1);
            }
            this->coefficients.resize(coef_derivative.size());
            for (int i = 0; i < coef_derivative.size(); i++) {
                this->coefficients[i] = coef_derivative[i];
            }
        }
        return *this;
    }

// Функция взятия первообразной с заданным порядком
    Polynomial Antiderivative(unsigned number_antiderivative) {
        for (auto j = 0u; j < number_antiderivative; j++) {
            std::vector<double> coef_antiderivative(this->coefficients.size() + 1);
            for (int i = 0; i < this->coefficients.size(); i++) {
                coef_antiderivative[i + 1] = this->coefficients[i] / (i + 1);
            }
            this->coefficients.resize(coef_antiderivative.size());
            for (int i = 0; i < coef_antiderivative.size(); i++) {
                this->coefficients[i] = coef_antiderivative[i];
            }
        }
        return *this;
    }

// Оператор вывода
    friend std::ostream& operator<<(std::ostream&, Polynomial&);

private:
//    Контейнер полинома, где индекс - степень, а значение - коэффициент слагаемого
    std::vector<double> coefficients;
//   Контейнер для хранения остатка от деления
    std::vector<double> remainsOfDivision;
};


// Реализация оператора вывода
std::ostream& operator<<(std::ostream& os, Polynomial& vector) {
//    for (auto i = 0u; i < vector.getRemainsOfDivision().size(); i++) {
//        os << i << " ";
//    }
//    os << std::endl;

    for (auto i = 0u; i < 1; i++) {
        auto v = vector.getCoefficients();
        if (i != 1 && v[i] != 1 && i > 0 && v[i] > 0) {
            os << v[i] << "x^" << i;
        } else if (i == 1 && v[i] != 1 && v[i] > 0) {
            os << v[i] << "x";
        } else if (i == 1 && v[i] == -1) {
            os << "-x";
        } else if (i != 1 && i > 0 && v[i] == 1) {
            os << "x^" << i;
        } else if (i != 1 && i > 0 && v[i] == -1) {
            os << "-x^" << i;
        } else if (i == 0 && v[i] != 0) {
            os << v[i];
        } else if (v[i] == 0) {
            continue;
        } else os << "x";
    }

for (auto i = 1u; i < vector.getCoefficients().size(); i++) {
    auto v = vector.getCoefficients();
    if (i != 1 && v[i] != 1 && i > 0 && v[i] > 0) {
        os << "+" << v[i] << "x^" << i;
    } else if (i == 1 && v[i] != 1 && v[i] > 0){
        os << "+" << v[i] << "x";
    }else if (i == 1 && v[i] != -1 && v[i] < 0){
        os << v[i] << "x";
    }else if (i  == 1 && v[i]  == -1 ){
        os << "-x";
    } else if (i != 1 && v[i] > 0 && v[i]  == 1) {
        os << "+x^" << i;
    } else if (i  != 1 && v[i]  > 0 && v[i]  == -1) {
        os << "-x^" << i;
    } else if (i == 0 && v[i] > 0) {
        os << "+" << v[i];
    }else if (i == 0 && v[i] < 0) {
        os << v[i];
    } else if (v[i] == 0) {
        continue;
    }
    else os << "x";
}

return os;
}



int main() {
    std::vector<double> a = {0, 2, 1};
    std::vector<double> b = {3, 2};
    Polynomial aa = a;
    Polynomial bb = b;
    Polynomial cc;
    cc = aa.Derivative(1);
    std::cout << cc;
}
