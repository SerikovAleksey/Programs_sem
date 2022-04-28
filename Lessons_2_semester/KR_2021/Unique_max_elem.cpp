#include <map>
#include <set>
#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::map<int, int> numbers;
    std::cin >> n;
    for (auto i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        numbers[num]++;
    }
    std::set<int> unique_nums;
    for (auto it = numbers.begin(); it != numbers.end(); it ++) {
        if (it->second == 1) {
            unique_nums.insert(it->first);
        }
    }
    std::cout << *unique_nums.rbegin();
}