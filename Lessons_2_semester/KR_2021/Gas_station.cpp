#include <exception>
class GasStation {
public:
    // Конструктор, принимающий один параметр - ёмкость резервуара колонки
    // Резервуар создаётся пустой
    GasStation(unsigned v):volume(v){
        capacity = 0;
    }

    // Залить в резервуар колонки n литров топлива
    // Если столько не влезает в резервуар - не заливать ничего, выбросить std::exception
    void fill(unsigned int n) {
        if (n <= volume - capacity) {
            capacity += n;
        } else throw std::exception();
    }

    // Заправиться, забрав при этом из резервура n литров топлива
    // Если столько нет в резервуаре - не забирать из резервуара ничего, выбросить std::exception
    void tank(unsigned int n) {
        if (n <= capacity) {
            capacity -= n;
        } else throw std::exception();
    }

    // Запросить остаток топлива в резервуаре
    unsigned int get_limit() const {
        return capacity;
    }
private:
    unsigned volume, capacity;
};