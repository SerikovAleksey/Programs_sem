#include <iostream>
#include <vector>

int main() {
    size_t points_amount;
    std::cin >> points_amount;
    std::vector<int>points(points_amount);
    for (auto i = 0u; i < points_amount; i++){
        std::cin >> points[i];
    }
    auto money_spent = 0;
    auto current_point = -1;
    for(;current_point +2 < points.size();){
        if (points[current_point + 1] <= points[current_point + 2]){
            current_point ++;
        } else{
            current_point +=2;
        }
        money_spent += points[current_point];
    }
    std::cout << money_spent;
}