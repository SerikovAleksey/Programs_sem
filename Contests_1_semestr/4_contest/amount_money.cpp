#include <iostream>
#include <vector>

auto subtract_money(int& amount, int denomination){
    auto result = amount / denomination;
    amount %= denomination;
    return  result;
}

int main() {
    int size_set, sum = 0, amount;
    std::cin >> size_set;
    std::vector<int> money(size_set);
    for (int i = 0; i < money.size(); i++){
        int detenomination;
        std::cin >> detenomination;
        money[i] = detenomination;
    }
    std::cin >> amount;
    for (int i = 0; i < size_set - 1; i++) {
        for (int j = size_set - 1; j > i; j--) {
            if (money[j] >= money[j - 1]) std::swap(money[j], money[j - 1]);
        }
    }
    for (int i = 0; i < size_set ; i++){
        if (money[i] <= amount) {
            amount -= money[i];
            sum++;
        }
    }
    if (amount == 0) std::cout << sum;
    else std::cout << -1;
}
