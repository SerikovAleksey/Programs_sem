#include <iostream>

int main() {
    int numbers[1000];
    unsigned n;
    std::cin >> n;
    for (auto i = 0u; i < n; i++){
        std::cin >> numbers [i];
    }
    for (auto i = n; i > 0;i--){
        std::cout << numbers [i-1]<< " ";
    }
    return 0;
}
