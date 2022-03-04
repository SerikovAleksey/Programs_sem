#include <iostream>

auto subtract_money(int& amount, int denomination){
    auto result = amount / denomination;
    amount %= denomination;
    return  result;
}
int main() {
    int amount;
    std::cin >> amount;
    std::cout << subtract_money(amount, 10) << ' ';
    std::cout << subtract_money(amount, 5) << ' ';
    std::cout << amount;
}