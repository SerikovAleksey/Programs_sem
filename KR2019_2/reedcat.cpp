#include <fstream>
#include <iostream>

int main() {
    std::string file, cat_name, description;
    int K, mice_amount;
    std::cin >> file >> K;
    std::ifstream fin(file);
    for(;fin >> cat_name && fin >> mice_amount && std::getline(fin, description);) {
        if (mice_amount == K) {
            std::cout << cat_name << std::endl;
        }
    }
}