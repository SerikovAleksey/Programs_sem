#include <iostream>
using namespace std;

unsigned int sum_of_numbers(unsigned long long int n);
unsigned long long int nonacci(unsigned int n);

//----------------------------------------------------
unsigned long long int nonacci(unsigned int n) {
    if (n == 8)return 1;
    if (n < 8)return 0;
    return nonacci(n - 1) +nonacci(n - 2) +nonacci(n - 3) +nonacci(n - 4) +nonacci(n - 5) +nonacci(n - 6) +nonacci(n - 7) +nonacci(n - 8) +nonacci(n - 9);
}
unsigned int sum_of_numbers(unsigned long long int n)
{
    unsigned int res = 0;
    while (n)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    unsigned int n;
    cin >>n;
    cout <<sum_of_numbers(nonacci(n)) <<endl;
    return 0;
}