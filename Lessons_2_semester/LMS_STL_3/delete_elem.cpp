#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    auto size = 0u;
    std::cin >> size;
    std::vector<int> sequence_1(size);
    for (auto elem = 0u; elem < size; elem++) {
        int numbers;
        std::cin >> numbers;
        sequence_1[elem] = numbers;
    }
    int number;
    std::cin >> number;

    auto delete_elem = std::remove_if(std::begin(sequence_1), std::end(sequence_1), [number](int elem){return  elem > number;});
    sequence_1.erase(delete_elem, std::end(sequence_1));
    for (auto elem:sequence_1) {
        std::cout << elem << " ";
    }
}