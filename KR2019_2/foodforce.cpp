#include <iostream>
#include <cmath>
#include <iomanip>

struct cat{
    double x, y;

    double abs() {
        return std::sqrt(x * x + y * y);
    }
};

cat operator+(cat lhs, cat rhs) {
    return {lhs.x + rhs.x, lhs.y + rhs.y};
}

int main () {
    int N;
    cat result = {0,0};
    std::cin >> N;
    for (auto i = 0u; i < N; i++){
        cat num{} ;
        double force;
        std::cin >> num.x >> num.y >> force;
        auto num_abs = num.abs();
        num.x = num.x / num_abs * force;
        num.y = num.y / num_abs * force;
        result = result + num;
    }
    std::cout << std::fixed << std::setprecision(4) << result.x << " " << result.y << "\n";
}
