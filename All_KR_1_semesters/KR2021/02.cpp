#include <iostream>
#include <vector>
#include <algorithm>
struct sob{
    int x, y, step;
};

int main() {
    int N;
    std::vector<sob> sobol(1);
    std::cin >> sobol[0].x >> sobol[0].y;
    sobol[0].step = std::abs(sobol[0].x - sobol[0].y);

    std::cin >> N;
    sobol.resize(N + 1);
    for (int i = 1; i < N + 1; i++){
        int q, w;
        std::cin >> q >> w;
        sobol[i].x = sobol[i - 1].x + q;
        sobol[i].y = sobol[i - 1].y + w;
        sobol[i].step = std::abs(sobol[i].x - sobol[i].y);
    }
    std::cout << sobol[N].step;
}
