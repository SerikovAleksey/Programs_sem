#include <algorithm>
#include <numeric>

class MoneyBox {
public:
    // Конструктор и деструктор, если нужны

    // Добавить монетку достоинством value
    void addCoin(unsigned int value) {
        coins.push_back(value);
    }

    // Получить текущее количество монеток в копилке
    unsigned int getCoinsNumber() const {
        return coins.size();
    }

    // Получить текущее общее достоинство всех монеток
    unsigned int getCoinsValue() const{
        auto sum = std::accumulate(coins.begin(), coins.end(), 0);
        return sum;
    }

private:
    std::vector<unsigned> coins;
};