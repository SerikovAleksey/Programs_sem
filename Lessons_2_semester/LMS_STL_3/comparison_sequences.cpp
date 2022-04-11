#include <algorithm>
#include <iostream>
#include <vector>

int main() {

    int size;
    std::cin >> size;
    std::vector<int> sequence_1(size);
    std::vector<int> sequence_2(size);
    for (auto elem = 0u; elem < size; elem++) {
        int numbers;
        std::cin >> numbers;
        sequence_1[elem] = numbers;
    }
    for (auto elem = 0u; elem < size; elem++) {
        int numbers;
        std::cin >> numbers;
        sequence_2[elem] = numbers;
    }
    std::sort(std::begin(sequence_1), std::end(sequence_1));
    std::sort(std::begin(sequence_2), std::end(sequence_2));
    int i = 0;
    for (auto elem = 0u; elem < size; elem++) {
        if (sequence_2[elem] == sequence_1[elem]){
            i++;
        }
    }
        if (i == size) std::cout <<std::boolalpha << true;
        else std::cout <<std::boolalpha << false;
}