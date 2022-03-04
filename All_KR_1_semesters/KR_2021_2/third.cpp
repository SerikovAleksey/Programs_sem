#include <iostream>
#include <vector>

int main() {
    int N, M, K, x, y, d;
    std::cin >> N >> M >> K;
    std::vector<std::vector<int>> field(M);
    for (auto i = 0u; i < M; i++) {
        field[i].resize(N);
        for (auto j = 0u; j < N; j++) {
            field[i][j] = 0;
        }
    }

    for (auto i = 0u; i < K; i++) {
        std:: cin >> x >> y >> d;
        if (d >= 0){
            field[y][x] = 1;
            for (auto j = 1; j <= d ; j++) {
                if (y + j < M){
                    field[y + j][x] = 1;
                }
                if (y - j >= 0) {
                    field[y - j][x] = 1;
                }
                if (x + j < N){
                    field[y][x + j] = 1;
                }
                if (x - j >= 0) {
                    field[y][x - j] = 1;
                }
                if (x - j >= 0 && y - j >= 0) {
                    field[y - j][x - j] = 1;
                }
                if (x + j < N && y + j < M) {
                    field[y + j][x + j] = 1;
                }
                if (x + j < N && y - j >= 0) {
                    field[y - j][x + j] = 1;
                }
                if (x - j >= 0 && y + j < M) {
                    field[y + j][x - j] = 1;
                }
                if (x - j >= 0 && y - j + 1 >=0){
                    field[y - j +1][x - j] = 1;
                }
                if (x - j + 1 >= 0 && y - j  >=0){
                    field[y - j][x - j + 1] = 1;
                }
                if (x + j >= 0 && y - j - 1 >=0){
                    field[y - j - 1][x - j ] = 1;
                }
            }
        }
    }
    int sum = 0;
    for (auto i = 0u; i < M; i++) {
        for (auto j = 0u; j < N; j++) {
            if (field[i][j] == 0){
                sum++;
            }
        }

    }

    if (K == 1) {std::cout << 0;} else std::cout << sum;
}
