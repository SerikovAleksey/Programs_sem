#include <iostream>

int main() {
    int n,k;
    k=0;
    std::cin >>n ;
    for (int i=1; i<=n; i++){
        if (n % i == 0) {
            k=i;
            std::cout << k;
            std::cout << " ";
        }
    }
    return 0;
}
