#include <iostream>

int main() {
    double m, r, g = 9.81, b, M = 0.2 * 0.01;
    std::cin >> m >> r >> b;
    std::cout << (m*g*r*0.00001 - M)/b<< std::endl;
    return 0;
}
