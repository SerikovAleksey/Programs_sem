#include <iostream>
#include <vector>


int main() {
    int x, y, k;
    std::cin >> x >> y >> k;
    std::vector<std::vector<char>> field(y);
    for (auto i = 0u; i < y; i++) {
        field[i].resize(x);
        for (auto j = 0u; j < x; j++){
            field[i][j] = '*';
        }
    }
    for (auto i = 0u; i < k; i++) {
        int coor_x, coor_y;
        std::cin >> coor_x >> coor_y;
        field[coor_y][coor_x] = 'T';
    }
    for (auto i = 0u; i < y; i++) {
        for (auto j = 0u; j < x; j++){
            std::cout << field[i][j];
        }
        std::cout << std::endl;
    }
}
