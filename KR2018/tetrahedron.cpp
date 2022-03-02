#include <iostream>
#include <vector>
#include <iomanip>


int main() {
    std::vector<float> cord(3);
    std::cin >> cord[0] >> cord[1] >> cord[2];
    float n;
    std::vector<std::vector<float>> det(3);
    for (int i = 0; i < 3; i++) {
        det[i].resize(3);
        for(int j = 0; j < 3; j++){
            std::cin >> n;
            det[i][j] = n - cord[j];
        }
    }
    float det_1 = (det[0][0]*(det[1][1]*det[2][2] - det[1][2]*det[2][1]) - det[0][1]*(det[1][0]*det[2][2]
            - det[1][2]*det[2][0]) + det[0][2]*(det[1][0]*det[2][1] - det[1][1]*det[2][0]));
    if(det_1>0) {
        std::cout<< std::fixed << std::setprecision(4) << det_1/6;
    } else{
        std::cout<< std::fixed<< std::setprecision(4) << det_1/(-6);
    }
    return 0;
}
