#include <iostream>
using std::cout;
using std::endl;

int main()
{
    unsigned int u = 1, u2 = 2;
    unsigned int *p = &u, *p2 = &u2;
    std::cout << *p + *p2;
    return 0;
}