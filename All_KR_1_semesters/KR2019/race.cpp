#include <iostream>
int main(){
    double  X, Y, V, W;
    std::cin >> X>> Y >> V >> W;
    if (W < V){
        std::cout << 0 << std::endl;
        return 0;
    }
    auto  time_survival = X / V;
    auto time_destruction = Y / (W - V);
    if (time_destruction < time_survival){
        std::cout << X - time_destruction * V;
    } else {
        std::cout << 0;
    }
}