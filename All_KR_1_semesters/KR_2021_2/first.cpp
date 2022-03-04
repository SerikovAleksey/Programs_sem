#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int k, j, sum = 0;
    for (auto i = 0u; i < N; i++) {
        std::cin >> k >> j;
        sum += k;
        sum -= j;
    }
    std:: cout << sum;
}
