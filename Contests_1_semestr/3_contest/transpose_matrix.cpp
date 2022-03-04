#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix;
    size_t n;
    std::cin >> n;
    matrix.resize(n);
    for (auto i = 0u; i < n; i++) {
        matrix[i].resize(n);
        for (auto j = 0u; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }
    for (auto i = 0u; i < n; i++) {
        for (auto j = 0u; j < n; j++) {
            std::cout << matrix[j][i] << ' ';
        }
        std::cout << std::endl;
    }
}