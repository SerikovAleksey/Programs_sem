#include <iostream>
#include <algorithm>
#include <vector>

int summa(std::vector<int> numbers, int n, int sum){
    if(sum == 0){
        return 1;
    }
    for(auto i = n-1;i>=0;i--){
        if(numbers[i] <= sum){
            if(numbers[i] == sum){
                return 1;
            }
            if(summa(numbers, i, sum - numbers[i]) == 1){
                return 1;
            }
            continue;
        }
    }
    return 0;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for(auto i = 0;i<n;i++){
        std::cin >> numbers[i];
    }
    std::sort(numbers.begin(), numbers.end());

    int sum;
    std::cin >> sum;
    if(summa(numbers, n, sum) == 1){
        std::cout << "yes";
    }
    else{
        std::cout << "no";
    }
    return 0;
}