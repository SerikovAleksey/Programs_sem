#include <iostream>

int main(){
    int x, y;
    std::cin >> x >> y;
    for(int u = 0; u<x; u++){
        for(int i = 0; i<y; i++)
            std::cout << "+";
        std::cout<<std::endl;
    }
    return 0;
}