#include <algorithm>
#include <iostream>

int main() {

    int size;
    std::cin >> size;
    std::vector<int> sequence(size);
    for (auto elem = 0u; elem < size; elem++) {
        int numbers;
        std::cin >> numbers;
        sequence[elem] = numbers;
    }
    std::reverse(std::begin(sequence), std::end(sequence));
    for (auto elem:sequence) {
        std::cout << elem << " ";
    }
}