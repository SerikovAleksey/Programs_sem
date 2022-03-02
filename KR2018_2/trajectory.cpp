#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a, b, c, d, t_1, t_2, tau, exp = 2.718281828459045, x;
    std:: cin >> a >> b >> c >> d >> t_1 >> t_2 >> tau;
    double k = 0;
    for (auto i = 0; k <= t_2; i++) {
        std::cout << std::fixed << std::setprecision(4) << k << " " <<
        a * pow(exp,b * k) + c * sin(d * k) << "\n";
        k += tau;
    }
}