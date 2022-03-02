#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<char>> matrix;
    size_t n, m;
    std::cin >> n >> m;
    std::cin.get();
    matrix.resize(n);
    for (auto i = 0u; i < n; i++) {
        matrix[i].resize(m);
        for (auto j = 0u; j < m; j++) {
            std::cin.get ( matrix[i][m - j - 1]);
        }
        std::cin.get();
    }
    for (auto i = 0u; i < m; i++) {
        for (auto j = 0u; j < n; j++) {
            std::cout << matrix[j][i];
        }
        std::cout << std::endl;
    }
}#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<char>> matrix;
    size_t n, m;
    std::cin >> n >> m;
    std::cin.get();
    matrix.resize(n);
    for (auto i = 0u; i < n; i++) {
        matrix[i].resize(m);
        for (auto j = 0u; j < m; j++) {
            std::cin.get ( matrix[i][m - j - 1]);
        }
        std::cin.get();
    }
    for (auto i = 0u; i < m; i++) {
        for (auto j = 0u; j < n; j++) {
            std::cout << matrix[j][i];
        }
        std::cout << std::endl;
    }
}