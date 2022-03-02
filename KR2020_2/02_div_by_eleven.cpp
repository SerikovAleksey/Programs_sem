#include <iostream>
#include <string>

int main () {
    std::string num;
    std::cin >> num;
    int sum = 0;
    for (auto i = 0u; i < num.size(); i++) {
        int num_int = num[i] - '0';
        sum += ((i % 2 == 0) ? num_int : -num_int);
    }
    std::cout << ((sum % 11 == 0) ? "YES" : "NO");
}