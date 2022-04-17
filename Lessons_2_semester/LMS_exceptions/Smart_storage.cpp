#include <iostream>
#include <vector>

class IncorrectIndexException: public std::exception {
public:
    explicit IncorrectIndexException(const std::string& message): eror_message(message){};
    const char* what() const noexcept override {
        return eror_message.c_str();
    }
private:
    std::string eror_message;
};

class Storage
{
public:
    // Конструктор хранилища размерности n
    Storage(unsigned int n){
        container.resize(n);
    }

    // Добавьте деструктор, если нужно

    // Получение размерности хранилища
    unsigned int getSize() const {
        return container.size();
    }

    // Получение значения i-го элемента из хранилища
    // Если индекс некорректен, нужно выбросить IncorrectIndexException
    int getValue(unsigned int i) const {
        if (i < container.size() - 1) {
            return container[i];
        }
        else throw IncorrectIndexException("Incorrect index");
    }

    // Задание значения i-го элемента из хранилища равным value
    // Если индекс некорректен, нужно выбросить IncorrectIndexException
    void setValue(unsigned int i, int value) {
        if (i < container.size() - 1) {
            container[i] = value;
        }else throw IncorrectIndexException("Incorrect index");
    }

private:
    std::vector<int> container;
};

int main() {
    unsigned int index;
    std::cin >> index;
    Storage s(42);
    s.setValue(index, 0);
    std::cout << s.getValue(index) << std::endl;
    return 0;
}