#include <algorithm>
#include <iostream>
#include <vector>

int main() {

    auto size = 0u;
    std::cin >> size;
    std::vector<int> sequence_1(size);
    std::vector<int> sequence_1_old(size);
    for (auto elem = 0u; elem < size; elem++) {
        int numbers;
        std::cin >> numbers;
        sequence_1[elem] = numbers;
        sequence_1_old[elem] = numbers;
    }

    std::vector<int> odd_numbers;
    for (auto item: sequence_1) {
        if (item % 2 != 0) {
            odd_numbers.push_back(item);
        }
    }
    std::sort(std::begin(odd_numbers), std::end(odd_numbers));
    auto deleted_1 = std::remove_if(std::begin(sequence_1), std::end(sequence_1), [](auto elem){return elem % 2 != 0;});
    sequence_1.erase(deleted_1, std::end(sequence_1));
    std::sort(std::rbegin(sequence_1), std::rend(sequence_1));

        for (auto j = 0u; j < sequence_1_old.size(); j++) {
            if (sequence_1_old[j] % 2 == 0) {
                sequence_1_old[j] = sequence_1[0];
                    sequence_1.erase(std::begin(sequence_1));
                }
        }

        for (auto j = 0u; j < sequence_1_old.size(); j++) {
            if (sequence_1_old[j] % 2 != 0) {
                sequence_1_old[j] = odd_numbers[0];
                    odd_numbers.erase(std::begin(odd_numbers));
        }
    }

    for (auto elem:sequence_1_old) {
        std::cout << elem << " ";
    }
}