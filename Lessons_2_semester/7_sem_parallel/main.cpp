#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> n(100);
    std::iota(std::begin(n), std::end(n), 0);
    auto sum = 0u;
    for (auto item: n){
        sum += item;
    }
        std::cout << sum;
}
