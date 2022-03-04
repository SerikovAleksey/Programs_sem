#include <iostream>

int main() {
    unsigned long long int x, n, k;
    x=1;
    std::cin >> n;
    for(k=1;k<=n;k++){
        x=x*k;
    }
    std::cout<<x;
    return 0;
}
