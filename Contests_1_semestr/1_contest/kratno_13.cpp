#include <iostream>
#include <cmath>

int main() {
    double a;
    std::cout << "Input a" << std::endl;
    std::cin >>a;
    if (a%13==0){
        std::cout<<"Yes"<<std::endl;
    }else {std::cout<<"No"<<std::endl;}
}

