#include <iostream>
#include <vector>

int main () {
    int n, sum_numbers = 0;
    std::cin >> n;
    std::vector<std::vector<int>> numbers(n);
    for (int i = 0; i < numbers.size(); i++) {
        numbers[i].resize(n);
        for (int j = 0; j < numbers.size(); j++)
            std::cin >> numbers[i][j];
    }
    for (int i = 0, j = n - 1; i < numbers.size() and j >= 0; i++, j--) {
        sum_numbers += numbers[i][j];
    }
    std::cout << sum_numbers;
}
