#include <iostream>

template <typename T>
struct Vector {
    Vector(unsigned new_size) { // Конструктор
        size = new_size;
        capacity = new_size;
        data = new T[size];
        for(auto i = 0u; i < size; data[i++] = 0);
    }

    ~Vector() { // Деструктор
        std::cout << "Deleting data and freeing memory" << std::endl;
        delete[] data;
    }

    void reallocate(unsigned new_capacity) { // Перевыделение памяти
        T* new_data = new T[new_capacity];
        for(auto i = 0u; i < std::min(size, new_capacity); i++) {
            new_data[i] = data[i];
        }
        delete[] data;
        data = new_data;
        capacity = new_capacity;
    }

    void resize(unsigned new_size) { // resize как у вектора
        reallocate(new_size);
        for(auto i = std::min(size, new_size); i < new_size; i++) {
            data[i] = 0;
        }
        size = new_size;
    }

    void push_back(T element) { // push_back как у вектора
        if (capacity > size) data[size++] = element;
        else {
            capacity = size * 2;
            reallocate(capacity);
            data[size++] = element;
        }
    }

    T& operator[](unsigned index) {
        return data[index];
    }

    T* begin() {
        return data;
    }

    T* end() {
        return data + size;
    }

    unsigned size;
    unsigned capacity;
    T* data;
};

int main() {
    Vector<int> v(1);
    v.push_back(0);
    v.push_back(42);
    v.push_back(54);
//    for(auto i = 0u; i < v.size; i++) {
//        std::cout << v[i] << ' ';
//    }
//    std::cout << std::endl;

    for(auto item : v) {
        std::cout << item << ' ';
    }
    std::cout << std::endl;

}