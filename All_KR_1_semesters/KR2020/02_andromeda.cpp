#include <iostream>
#include <vector>

int main () {
    int n, max = 0, amount_max = 0;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < numbers.size(); i++) {
        std::cin >> numbers.at(i);
        max = numbers[0];
    }
    for (int i = 0; i < numbers.size(); i++) {
        if (n == 1){
            amount_max = numbers[0];
        } else if(numbers[i] >= max and numbers[i] >= numbers[1]) {
            max = numbers.at(i);
            amount_max++;
        }
    }
    std::cout << amount_max;
}
