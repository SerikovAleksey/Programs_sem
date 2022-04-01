#include <string>
#include <iostream>
#include <map>

class Animal {
public:
    virtual std::string getType() const = 0;
    virtual ~Animal() {}
};

class ZooKeeper {
public:
    // Создаём смотрителя зоопарка
    ZooKeeper(){};

    // Смотрителя попросили обработать очередного зверя.
    void handleAnimal(const Animal& a){
        animal[a.getType()]++;
    }

    // Возвращает, сколько зверей такого типа было обработано.
    // Если таких не было, возвращает 0.
    int getAnimalCount(const std::string& type){
        if (animal[type] > 0) return animal[type];
        return 0;
    }

private:
    std::map<std::string, int> animal;
};

int main () {
    ZooKeeper z;
    An
    Animal *a = new Monkey();
    z.handleAnimal(*a);
    delete a;
    a = new Monkey();
    z.handleAnimal(*a);
    delete a;
    a = new Lion();
    z.handleAnimal(*a);
    delete a;
    cout << z.getAnimalCount("monkey") << endl;
    cout << z.getAnimalCount("lion") << endl;
    cout << z.getAnimalCount("cat") << endl;
}