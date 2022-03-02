#include <iostream>

bool do_some_work(int* a, int* b){
    return (*a) > (*b);
}

int main() {
    int c, d;
    std::cin >> c >> d;
    if (do_some_work(&c, &d)){
        std::cout << c - d;
    }else{
        std::cout << c + d;
    }
}