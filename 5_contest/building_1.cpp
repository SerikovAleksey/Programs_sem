#include <iostream>
#include <vector>


int search (int a, int b, int wind, std::vector<std::vector<int>>matrix) {
    for (auto i = 0u; i < wind; i++){
        for (auto j = 0u; j < 4; j++){
            if (matrix[i][j] = a)
        }
    }
}

int main () {
    int N, M, wind, minX, maxX, minY, maxY, coor;
    std::cin >> N >> M >> wind;
    std::vector <std::vector<int>> coordinates(wind);
    for (auto i = 0u; i < wind; i++){
        coordinates[i].resize(4);
        for (auto j = 0u; j < 4; j++){
           std::cin >> coor;
           coordinates[i][j] = coor;
        }
    }


    std::vector <std::vector<int>> fassade(M);
    for (auto i = 0u; i < M; i++){
        fassade[i].resize(N);
        for (auto j = 0u; j < N; j++){
           if (search(i,j, wind, coordinates))
        }
    }
    for (auto i = 0u; i < M; i++){
        for (auto j = 0u; j < N; j++){
            std::cout << fassade[i][j];
        }
    }
}