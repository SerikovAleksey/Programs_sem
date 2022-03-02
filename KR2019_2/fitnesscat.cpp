#include <iostream>
#include <cmath>
#include <vector>

struct vector {
    double  x, y, z;

    double abs() {
        return std::sqrt(x * x + y * y + z * z);
    }
};

int main() {
    int N;
    double norm;
    std::cin >> N;
    double vector_abs = 0;
    std::vector<double> way(N);
    for (auto i = 0u; i < N; i++) {
        vector cat {};
        std::cin >> cat.x >> cat.y >> cat.z;
        vector_abs = cat.abs();
        way[i] = vector_abs;
    }
    std::cin >> norm;
    for (auto i = 0u; i < N; i++) {
        if (way[i] >= norm) {
            std::cout << i;
            break;
        }
        if (i == N - 1 && way[i] < norm){
            std::cout << "-1";
        }
    }
}
