#include <algorithm>
#include <iostream>
#include <vector>

int main() {

    auto size = 0u;
    std::cin >> size;
    std::vector<int> sequence_1(size);
    std::vector<int> sequence_1_old(size);
    std::vector<int> sequence_2(size);
    for (auto elem = 0u; elem < size; elem++) {
        int numbers;
        std::cin >> numbers;
        sequence_1[elem] = numbers;
        sequence_1_old[elem] = numbers;
    }
    for (auto elem = 0u; elem < size; elem++) {
        int numbers;
        std::cin >> numbers;
        sequence_2[elem] = numbers;
    }
    std::sort(std::begin(sequence_1), std::end(sequence_1));
    std::sort(std::begin(sequence_2), std::end(sequence_2));
    std::vector<int> intersection;
    set_intersection(sequence_1.begin(), sequence_1.end(), sequence_2.begin(), sequence_2.end(),
                     std::back_inserter(intersection));

    for (auto i = 0u; i < sequence_1_old.size(); i++) {
        for (auto j = 0u; j < intersection.size(); j++) {
                if (sequence_1_old[i] == intersection[j] ) {
                    std::cout << sequence_1_old[i] << " ";
                    auto it = std::begin(intersection);
                    intersection.erase(it + j);
                    break;
                }
        }
    }
}