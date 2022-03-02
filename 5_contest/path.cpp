#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;
    std::vector<std::vector<int>> array(M);
    std::vector<std::vector<int>> mirror_array(M);
    for (auto i = 0u; i < M; i++) {
        array[i].resize(N);
        mirror_array[i].resize(N);
        for (auto j = 0u; j < N; j++) {
            std::cin >> array[i][j];
        }
    }
    for (auto i = 0u; i < M; i++) {
        for (auto j = 0u; j < N; j++) {
            array[i][j] > mirror_array[i][j + 1] ? mirror_array[i][j + 1] += array[i][j] : mirror_array[i][j + 1] +=0;
            array[i][j] < mirror_array[i + 1][j] ? mirror_array[i + 1][j] += array[i][j] : mirror_array[i + 1][j] +=0;
            std::cout << mirror_array[i][j];
        }
    }
    int amount_step = 0;
for (auto i = M - 1; i >= 0;){
    for (auto  j = N - 1; j >= 0;){
        mirror_array[i - 1][j] < mirror_array[i][j - 1] ? i-- : j--;
        amount_step++;
    }
}
std::vector<int>name_step(amount_step);
    for (auto i = M - 1; i >= 0;){
        for (auto  j = N - 1; j >= 0;){
            if (mirror_array[i - 1][j] < mirror_array[i][j - 1]) {
                i--;
                name_step[i] = 1;
        }else {
                j--;
               name_step[i] = 0;
            }
    }
}
    for (auto i = name_step.size() - 1; i >= 0; i--){
        if (name_step[i] == 1){
            std::cout << "down" ;
        }std::cout << "right";
    }
}