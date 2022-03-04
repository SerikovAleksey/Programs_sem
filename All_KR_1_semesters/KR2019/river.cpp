#include <iostream>

int del(int n){
    int sum = 0;
    int f = n;
    for (f; f > 0; f / 10){
        sum += f % 10;
    }
    return sum;
}

//int sum (int n, int m){
//    n +=
//}
//
//int rivers (int n, int m){
//    if (n == m){
//        return n;
//    }
//    for (auto i = 0u; )
//}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << del(n);

}