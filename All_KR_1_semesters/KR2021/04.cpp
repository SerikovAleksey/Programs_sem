#include <iostream>
#include <vector>

struct fon{
    int x, d;
};

int main() {
    int n, k;
    std::cin >> n;
    std::cin >> k;
    std::vector<fon> road(k);
    std::vector<int> b(n);
    for (auto i = 0u; i < k; i++) {
        std::cin >> road[i].x >> road[i].d;
        b[road[i].x] = 1;
    }
    for (auto i = 0u; i < n; i++) {
        std::cout << b[i];
    }


    }
}