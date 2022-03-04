#include <iostream>
#include <vector>

int main () {
    int N;
    std::cin >> N;
    std::vector<std::vector<int>> matrix_1(N);
    for (auto i = 0u; i < N; i++){
        matrix_1[i].resize(N);
        for (auto j = 0u; j < N; j++){
            std::cin >> matrix_1[i][j];
        }
    }
    std::vector<std::vector<int>> matrix_2(N);
    for (auto i = 0u; i < N; i++){
        matrix_2[i].resize(N);
        for (auto j = 0u; j < N; j++){
            std::cin >> matrix_2[i][j];
        }
    }

    std::vector<std::vector<int>> matrix(N);
    int k = 0, n = 0;
    for (int i = 0; i < N; i++) {
        matrix[i].resize(N);
        for (auto j = 0u; j < N; j++) {
            matrix[i][k] += matrix_1[i][j] * matrix_2[j][n];
        }
        if (k == N - 1) {
            k = 0;
            n = 0;
        } else {
            k++;
            i--;
            n++;
        }
    }
    for (auto i = 0u; i < N; i++){
        for (auto j = 0u; j < N; j++){
            if ( j < N - 1) {
                std::cout << matrix[i][j] << " ";
            } else {
                std::cout << matrix[i][j] << std:: endl;
            }
        }
    }

}