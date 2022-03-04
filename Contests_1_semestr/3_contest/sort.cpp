#include <iostream>
#include <vector>

int main() {
    int N, otr = 0, pol = 0, str_1[1000], str_2[1000];
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        int num;
        std::cin >> num;
        if (num < 0){
            str_1[otr] = num;
            otr++;
        }
        if (num >= 0) {
            str_2[pol] = num;
            pol++;
        }
    }
    for (int i = 0; i < pol - 1; i++) {
        for (int j = pol - 1; j > i; j--) {
            if (str_1[j] >= str_1[j - 1]) std::swap(str_1[j], str_1[j - 1]);
        }
    }
    for (int i = 0; i < otr - 1; i++) {
        for (int j = otr - 1; j > i; j--) {
            if (str_1[j] <= str_1[j - 1]) std::swap(str_1[j], str_1[j - 1]);
        }
    }
    for (int i = pol - 1; i >= 0; i--) {
        std::cout << str_2[i] << ' ';
    }
    for (int i = otr - 1; i >= 0; i--) {
        std::cout << str_1[i] << ' ';
    }
}