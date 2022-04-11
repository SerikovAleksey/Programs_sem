#include <iostream>
#include <vector>

int main() {
    std::vector<int> a(5);
    for(auto i = 0u; i < 5; i++) {
        std::cin >> a.push_back(i);
    }
    std::vector<int> b(5);

    for(auto i = 0u; i < 5; i++) {
        std::cin.get() >> b[i];
    }

    for(auto i = 0u; i < 5; i++) {
        std::cout << a[i];
    }
}
