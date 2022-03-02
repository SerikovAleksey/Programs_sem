#include <iostream>

int main () {
    long int a, b, c, s, r;
    int i = 1, n = 0;
    std::cin >> a >> b >> c;
    for (i; i <= a; i++) {
        if (a % i == 0 and b % i == 0)
            n = i;
    }
    s = a * b / n;
    int l = 0, k = 1;
    for (k; k <= c; k++) {
        if (c % k == 0 and s % k == 0)
            l = k;
    }
    r=c*s/l;
    std::cout << r;
    return 0;
}