#include <string>
#include <iostream>

class Animal {
public:
    virtual std::string getType() = 0;
    virtual bool isDangerous() = 0;
};

class ZooKeeper {
public:
    // Создаём смотрителя зоопарка
    ZooKeeper() : sum(){}

    // Смотрителя попросили обработать очередного зверя.
    // Если зверь был опасный, смотритель фиксирует у себя этот факт.
    void handleAnimal(Animal* a) {
        a->isDangerous() == 1 ? sum++ : sum+= 0;
    }

    // Возвращает, сколько опасных зверей было обработано на данный момент.
    int getDangerousCount() {
        return sum;
    }

private:
    int sum;
};
class Monkey : public Animal{
public:
    std::string getType() override{
        return "norm";
    }
    bool isDangerous() override{
        return false;
    }
};
class Lion : public Animal{
public:
    std::string getType() override{
        return "norm";
    }
    bool isDangerous() override{
        return true;
    }
};

int main () {
    ZooKeeper z;

    Monkey *m = new Monkey();
    z.handleAnimal(m);
    delete m;
    m = new Monkey();
    z.handleAnimal(m);
    delete m;
    Lion *l = new Lion();
    z.handleAnimal(l);
    delete l;
    std::cout << z.getDangerousCount() << std::endl;
}