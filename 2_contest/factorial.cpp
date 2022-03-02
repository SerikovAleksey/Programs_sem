#include <iostream>
using namespace std;

unsigned int sum_of_numbers(unsigned long long int n);
unsigned long long int factorial(unsigned int n);

//----------------------------------------------------
unsigned long long int factorial(unsigned int n){
    long long int s=1;
    for (long long int i=1;i<=n;i++){
        s=s*i;
    }
    return s;
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
    cout <<sum_of_numbers(factorial(n)) <<endl;
    return 0;
}