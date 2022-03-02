#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

struct reviews {
    std::string name;
    double result = 0;
};

int main () {
    int n;
    std::cin >> n;
    std::vector<reviews> data(n);

    for (auto i = 0; i < n; i++) {
        int k;
        std::cin >> data[i].name >> k;

        for (auto l = 0u; l < k; l++) {
            auto rew = 0u;
            std::cin >> rew;
            data[i].result += rew;
        }

        data[i].result = data[i].result / k;
    }

    for (auto i = 0; i < n; i++) {
            for(int j = 0; j < n - 1; j++)
                if(data[j].result < data[j+1].result)
                    std:: swap(data[j], data[j+1]);
    }

    for (auto i = 0; i < n; i++) {
        std::cout << std::fixed << std::setprecision(3)
        << data[i].name << ' ' << data[i].result<< "\n";
    }
}
