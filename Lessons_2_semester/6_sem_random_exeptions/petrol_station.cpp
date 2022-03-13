#include <iostream>
#include <exception>
#include <sstream>

// Класс исключения для передачи сообщения об избытке топлива
class PetrolOverflowException : public std::exception {
public:
    // Конструктор -- здесь мы формируем сообщение
    PetrolOverflowException(unsigned n, unsigned size) {
        std::stringstream ss;
        ss << n << " is too much for this petrol station" << std::endl << "Free amount in this station is " << size;
        message = ss.str();
    }

    // Метод what() -- выдаём сообщение в виде С-строки
    const char* what() const noexcept override {
        return message.c_str();
    }

private:
    std::string message;
};

class ExceptionToLowAmountPetrol : public std::exception {
public:
    ExceptionToLowAmountPetrol(unsigned size, unsigned n){
        std::stringstream ss;
        ss << "This petrol station have only " << size  << " liters of gas" << std::endl << "You don't can refuel " << n << " liters" ;
        massage = ss.str();
    }

    const char* what() const noexcept override {
        return massage.c_str();
    }
private:
    std::string massage;
};

class GasStation {
public:
    // Конструктор, принимающий один параметр - ёмкость резервуара колонки
    // Резервуар создаётся пустой
    GasStation(unsigned capacity): capacity(capacity), size(0u) {}

    // Залить в резервуар колонки n литров топлива
    // Если столько не влезает в резервуар - не заливать ничего, выбросить std::exception
    void fill(unsigned int n) {
        if (size + n > capacity) {
            throw PetrolOverflowException(n, size);
        }
        size += n;
    }

    // Заправиться, забрав при этом из резервура n литров топлива
    // Если столько нет в резервуаре - не забирать из резервуара ничего, выбросить std::exception
    void tank(unsigned int n) {
        if (n > size) {
            throw ExceptionToLowAmountPetrol(size, n);
        }
        size -= n;
    }

    // Запросить остаток топлива в резервуаре
    unsigned int get_limit() const {
        return size;
    }

private:
    unsigned size;
    const unsigned capacity;
};

using std::cout, std::endl;

int main() {
    GasStation s = GasStation(1000);            // Колонка на 1000, пока пустая
    s.fill(300);                                // Это влезет в резервуар,
    cout << s.get_limit() << endl;              // ... так что здесь увидим на экране 300.

    s.tank(100);                                // Забрали из резервуара 100,
    s.fill(300);                                // ... после чего долили ещё 300,
    cout << s.get_limit() << endl;              // ... так что на экране ожидаем 500.

    for (unsigned int i = 0; i < 5; i++)         // В цикле забрали 5 раз по 50,
        s.tank(50);
    cout << s.get_limit() << endl;              // ... так что на экране ожидаем 250.

    try {
        s.fill(1000);                               // А вот тут ожидаем exception.
    } catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
//     (После проверки exception-а строку стоит просто убрать.)
    try {
    for (unsigned int i = 0; i < 50; i++) {      // Теперь пытаемся забрать 50 раз по 100,
        s.tank(100);                            // из-за чего на третьей попытке ждём exception.
        cout << s.get_limit() << endl;
        }
    } catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    }

