#include <iostream>

struct Structure {
    int field = 42;
};

int main() {
//    int x = 5;
//    int* x_pointer = &x; // Вводятся два новых унарных оператора: 1) оп-р взятия адреса
//    auto y = *x_pointer; // 2) Оп-р разыменования

//    std::cout << "Desired address: " << x_pointer << std::endl; // адрес 1-й ячейки из 4-х

    int array[10] = {003};

//    std::cout << *array << std::endl; // Первый элемент массива
//    char* pointer = (char*)(array); // Преобразование int* -> char*
//    std::cout << array << std::endl; // Сдвиг на 1 ячейку
//    std::cout << (int*)(pointer + 1) << std::endl; // Сдвиг на 1 ячейку
//    std::cout << array + 1 << std::endl; // Сдвиг на 4 ячейки
//    std::cout << (int*)(pointer + 4) << std::endl; // Сдвиг на 4 ячейки

    char* pointer = (char*)(array); // Преобразование int* -> char*
    for (auto i = 0; i < 1; i++) {
        std::cout << *(pointer + i)<< " I love Alina " <<*(pointer + i) << std::endl; // Вывод int-а как четырёх char-ов
    }

//    // Вот так работает оператор квадратных скобок: array[5] == *(array + 5)
//    for(auto i = 0; i < 10; i++) {
//        std::cout << i[array] << std::endl; // Итерация с инверсным выставлением скобок
//    }

// Динамические переменные
//    unsigned size;
//    std::cin >> size;
//    int* numbers = new int[size]; // Просим у системы память в размере size * sizeof(int)
//    for(auto i = 0u; i < size; i++) {
//        std::cin >> *(numbers + i);
//    }
//    for(auto i = 0u; i < size; i++) {
//        std::cout << numbers[i] << ' ';
//    }
//
//    delete[] numbers; // Отдаём память обратно

//    int* something = new int(size); // Просим у системы память в размере size
//    std::cout << *something << std::endl;
//
//    delete something;

//    Structure structure;
//    std::cout << structure.field << std::endl;
//
//    Structure* ptr_structure = &structure;
//    std::cout << ptr_structure->field << std::endl; // обращение к полю, имея указатель на структуру

    return 0;
}