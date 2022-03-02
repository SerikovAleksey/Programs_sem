#include <iostream>
#include <vector>

struct Point {
    int x, y;
};

std::vector<Point> read_window() {
    Point min{}, max{};
    std::cin >> min.x >> max.x >> min.y >> max.y;
    std::vector<Point> result;
    for(auto i = min.x; i < max.x; i++) {
        for(auto j = min.y; j < max.y; j++) {
            result.push_back({i, j});
        }
    }
    return result;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<bool>> fassade(n);
    for(auto& line : fassade) {
        line.resize(m);
    }
    size_t windows_amount;
    std::cin >> windows_amount;
    int x = 0;
    for(auto i = 0u; i < windows_amount; i++) {
        auto window = read_window();
        for (auto &square: window) {
            auto &x_p = square.x;
            auto &y_p = square.y;
            if (x_p >= n, y_p >= m){
                x_p = n -1;
                y_p = m -1;
                x = 1;
            }
                if (fassade[x_p][y_p]) {
                    x = 1;
                } else {
                    fassade[x_p][y_p] = true;
                }
            }
        }
    if (x == 0) std::cout << "correct";
    else std::cout << "broken";
    return EXIT_SUCCESS;
}
