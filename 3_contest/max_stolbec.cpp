#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix;
    size_t n, m;
    std::cin >> n >> m;
    matrix.resize(n);
    for (auto i = 0u; i < n; i++) {
        matrix[i].resize(m);
        for (auto j = 0u; j < m; j++) {
            std::cin >> matrix[i][j];
        }
    }
    int stolbech = 0;
    int sum = 0, max = 0;
    for (auto i = 0u; i < m; i++) {
        for (auto j = 0u; j < n; j++) {
            sum += matrix[j][i];
            if (sum > max) {
                stolbech = i;
                max = sum;
                sum = 0;
            }
        }
    }
    std::cout << stolbech;
    return 0;
}