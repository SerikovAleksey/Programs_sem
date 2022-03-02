#include <iostream>

int main() {
    int n, b, c;
    b = 1;
    std::cin >> n;
    c=(n-1)/2;
    for (int i = 1; i <= (n-1)/2; i++) {
        for (int k = 1; k <= c; k++)
            std::cout << " ";
        for (int k = 1; k <= b; k++)
            std::cout << "+";
        for (int k = 1; k <= c; k++)
            std::cout << " ";
        std::cout << std::endl;
        c--;
        b += 2;
    }
    for (int i = (n-1)/2; i >=0; i--) {
        for (int k = 1; k <= c; k++)
            std::cout << " ";
        for (int k = 1; k <= b; k++)
            std::cout << "+";
        for (int k = 1; k <= c; k++)
            std::cout << " ";
        std::cout << std::endl;
        c++;
        b -= 2;
    }
}