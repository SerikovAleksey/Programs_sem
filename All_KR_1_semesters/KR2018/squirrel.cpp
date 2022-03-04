#include <iostream>
#include <cmath>
#include <iomanip>

int main () {
    double H, g = 9.81, V, X;
    std::cin >> H >> V;
    X = V  * sqrt(2 * H / g );
    std::cout <<std::fixed << std::setprecision(4) << X;
}