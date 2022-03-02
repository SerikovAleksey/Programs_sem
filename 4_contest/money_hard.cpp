#include <iostream>

auto subtract_money(int& amount, int denomination) {
    auto result = amount / denomination;
    amount %= denomination;
    return result;
}
auto  print_amount(int value, int amount){
    for (auto i = 0; i < amount; i++){
        std::cout << value << ' ';
    }
}
int main() {
    int amount;
    std::cin >> amount;
    int tens_amount = (amount > 10) ? (amount / 10 ) - 1 : 0;
    int sevens_amount = 0, fives_amount = 0, ones_amount = 0;
    int remainder = (amount > 10) ? amount % 10 + 10 : amount;
    if (remainder == 12){
        sevens_amount++;
        fives_amount++;
    }else if (remainder == 14){
        sevens_amount +=2;
    }else if (remainder == 13) {
        sevens_amount++;
        fives_amount++;
        ones_amount++;
    }else if (remainder == 19){
        sevens_amount +=2;
        fives_amount++;
    }else{
        tens_amount += subtract_money(remainder, 10);
        sevens_amount += subtract_money(remainder, 7);
        fives_amount += subtract_money(remainder, 5);
        ones_amount += subtract_money(remainder, 1);
    }
    print_amount(1, ones_amount);
    print_amount(5, fives_amount);
    print_amount(7, sevens_amount);
    print_amount(10, tens_amount);

}
