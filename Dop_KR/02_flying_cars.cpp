#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double k, h, m;
    std::cin >> k >> h >> m;
    std::cout<<std::fixed<<std::setprecision(1) << std::sqrt(2 * k * h * h / m);
}
