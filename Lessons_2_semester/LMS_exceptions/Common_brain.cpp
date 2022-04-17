#include <iostream>
#include <string>
#include <vector>
using std::vector, std::cout, std::endl, std::string;

class Brain {
protected:
    // Здесь хранится что-то очень ценное.
    // Наверное, набор волшебных чисел для нейронной сети, управляющей гоблином.
    vector<double> data;

    // А здесь просто фраза, которой гоблин откликается по умолчанию
    string phrase;

public:
    // Конструктор мозга
    Brain() {
        // Мозг занимает в памяти много места, да
        data.resize(1000000);
        // Установим эталонную фразу
        phrase = "Booyahg Booyahg Booyahg";
    }

    // Мозг умеет подсказать гоблину, какую фразу выдать
    string speak() {
        return phrase;
    }
};
class Goblin{
public:
    // Подходящие конструкторы и деструкторы
    Goblin() = default;

    void setPhrase(const string &phrase) {
        Goblin::phrase = phrase;
    }

    // Просто вернуть фразу, которую гоблину подсказывает мозг
    // (Метод используется для проверки, что голова гоблина содержит правильный мозг)
    std::string speak() const {
        return phrase;
    }

private:
    string phrase;
};

// Получает size - требуемый размер армии. Возвращает вектор гоблинов требуемого размера.
// На всю армию создаёт один мозг, к которому имеют доступ все гоблины армии.
// Мозг можно создать просто как Brain(), либо new Brain(), либо любым другим способом создания объекта.
std::vector<Goblin> create_goblin_army(unsigned int size) {
    std::vector<Goblin> goblins(size);
    Brain brain;
    for(auto& gob: goblins) {
        gob.setPhrase(brain.speak());
    }
    return goblins;
}
int main()
{
    unsigned int size1 = 1;
    unsigned int size2 = 1000;
    vector<Goblin> army1 = create_goblin_army(size1);
    vector<Goblin> army2 = create_goblin_army(size2);

    for(unsigned int i = 0; i < size1; i++) {
        cout << army1[i].speak() << endl;
    }
    for(unsigned int i = 0; i < size2; i++) {
        cout << army2[i].speak() << endl;
    }

    return 0;
}