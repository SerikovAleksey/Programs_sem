#include <iostream>
#include <cmath>

int main() {
    double a1, V2, S, t1, t2;
    std::cin >> a1 >> V2 >> S;
    t1 = sqrt(2*S / a1);
    t2 = S / V2;
    if (t1 > t2) std::cout << 2;
    else std::cout << 1;
}
