#include <iostream>
#include <algorithm>

struct  Cylinder {
    double  r = 0, h = 0, rho = 0;
    unsigned index = 0u;
};

Cylinder input_values( unsigned index){
    Cylinder result;
    std::cin >> result.r >> result.h >> result.rho;
    result.index = index;
    return result;
};

int main() {
    unsigned N;
    std::cin >> N;
    std::vector<Cylinder> list(N);
    auto index = 0u;
    for (auto &value: list) {
        value = input_values(index++);
    }
    std::sort(list.begin(), list.end(), [](Cylinder lhs, Cylinder rhs) {
        return lhs.h * lhs.r * lhs.r * lhs.rho > rhs.h * rhs.r * rhs.r * rhs.rho;
    });
    std::cout << list[0].index;
}