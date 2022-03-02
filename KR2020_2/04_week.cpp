#include <iostream>
#include <string>
#include <map>

int main() {
    int n;
    std::cin >> n;
    std::string days;
    std::map<int, std::string> num{
            {1, "Mon"},
            {2, "Tue"},
            {3, "Wed"},
            {4, "Thu"},
            {5, "Fri"},
            {6, "Sat"},
            {7, "Sun"}
    };

    std::map<std::string, int> num_day;
    for (auto i = 0u; i < n; i++) {
        std::cin >> days;
        num_day[days]++;
    }
    for (auto& k: num) {
        auto& day = k.second;
        for (auto i = 0u; i < num_day[day]; i++) {
            std::cout << day << " ";
        }
    }
}