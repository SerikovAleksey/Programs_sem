#include <iostream>
#include <vector>

int main() {
    size_t size;
    std::cin >> size;
    std:: vector<int> numbers;
    numbers.resize(size);
    auto sum = 0;
    for (auto i = 0u; i < size; i++){
        int element;
        std::cin >> element;
        sum += element;
        numbers [i]=element;
    }
    auto average = 1. * sum / size;
    for (auto i = 0u; i <= numbers.size();i++){
        if (numbers [i] > average) std::cout << numbers [i] << ' ';
    }
}
