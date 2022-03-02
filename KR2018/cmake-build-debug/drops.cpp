#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int N;
    double r, R = 0.;
    std::cin >> N;
    for (auto i = 0u; i < N; i++){
       std::cin >> r;
      R += r * r;
    }
    std::cout<< std::fixed << std::setprecision(4) << sqrt(R) ;
}