#include <string>
#include <iostream>

int main () {
    std::string num;
    std::cin >> num;
    num[num.size() - 1] % 2 == 0 ? std::cout << "even" : std::cout << "odd";
}