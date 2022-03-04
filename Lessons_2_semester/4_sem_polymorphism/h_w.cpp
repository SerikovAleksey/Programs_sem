//Theory:
//
//1. Нельзя, потому что эти операторы берут экземпляр класса, что нельзя сделать внутри класса
//
//2. Tuple и Pair. По ним сложно итерироваться. Pair является частью map-ы и unordered_map-ы(имеет ключ - значение)

#include <iostream>
#include <set>

class MoneyBox {
public:
    // Конструктор и деструктор, если нужны

    // Добавить монетку достоинством value
    void addCoin(unsigned int value) {
        coins.insert(value);
    }

    // Получить текущее количество монеток в копилке
    unsigned int getCoinsNumber() const {
        return coins.size();
    }

    // Получить текущее общее достоинство всех монеток
    unsigned int getCoinsValue() const{
        int sum = 0;
        for (auto i = coins.begin(); i != coins.end(); i++) {
            int it = *i;
            sum += it;
        }
        return sum;
    }

private:
    std::multiset<int> coins;
};

int main () {
    MoneyBox m;
    m.addCoin(10);
    m.addCoin(10);
    m.addCoin(5);
    std::cout << m.getCoinsNumber() << std::endl;
    std::cout << m.getCoinsValue();
}