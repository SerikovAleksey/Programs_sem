#include <iostream>
using namespace std;

unsigned int sum_of_numbers(unsigned int n) {
    int sum=0;
    for (;n>0;n/=10){
        sum+=n%10;
    }
    return sum;
}
int main()
{
    unsigned int n;
    cin >>n;
    cout <<sum_of_numbers(n) <<endl;
    return 0;
}