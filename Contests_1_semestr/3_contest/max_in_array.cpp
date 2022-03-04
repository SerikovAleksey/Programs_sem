#include <iostream>
#include <vector>

int main() {
    std::vector<int> array;
    int n;
    std::cin >> n;
    array.resize(n);
    for (auto i = 0u; i < n; i++) {
        int numbers;
        std::cin >> numbers;
        array[i] = numbers;
    }
    int m, j;
    std::cin >> m;
    for (int i = 0; i < m; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            if (array[j] >= array[j - 1]) std::swap(array[j - 1], array[j]);
        }
    }
    for (j = m - 1; j >= 0; j--)
        std::cout << array[j] << ' ';
}