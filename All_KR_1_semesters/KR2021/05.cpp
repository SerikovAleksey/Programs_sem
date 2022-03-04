#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

unsigned int sum_ternary(unsigned int a) {
    int summa = 0, r = 0;
    int qw[1000];
    for (r; a > 0; r++){
        qw[r] = a % 3;
        a = (a - a % 3)/3;
    }
    for (auto l = r - 1 ; l >= 0; l--){
        summa += qw[l];
    }
    return summa;
}

int main()
{
    unsigned int n, s = 0, tmp;
    cin >> n;
    for (unsigned int i = 0; i < n; i++)
    {
        cin >> tmp;
        s += sum_ternary(tmp);
    }
    cout << sum_ternary(s) << endl;
    return 0;
}