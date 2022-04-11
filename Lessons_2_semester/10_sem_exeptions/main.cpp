#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> s = {3, 4, 7, 1, 5};
    for (auto i = 0u; i < 5; i++) {
        std::vector<int> copy;
        std::copy(std::next(std::begin(s), i), std::next(std::begin(s), i + 1), std::back_inserter(copy));
        std::sort(std::begin(copy), std::end(copy));
        for (auto elem:copy) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

}
