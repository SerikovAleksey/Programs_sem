#include <iostream>
#include <iomanip>

int main() {
    int N, d = 0;
    std::cin >> N;
    double pres, temp, p = 0, t = 0;
    for (auto i = 0u; i < N; i++) {
        std::cin >> temp >> pres;
        if (temp < 80 && temp > - 70) {
            p += pres;
            d++;
        }
        t += temp;
    }
    std::cout << std::fixed << std::setprecision(4) << t/N << " " << p/d;
}