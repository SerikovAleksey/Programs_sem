#include <iostream>

int main() {
    int  N, M;
    std::cin >> N >> M;
    for (auto i = 0u; i < M; i++){
        std::cout << "|";
    }
    for (auto i = 0u; i < N; i++){
        std::cout << "=";
    }
    for (auto i = 0u; i < M; i++){
        std::cout << "|";
    }
}