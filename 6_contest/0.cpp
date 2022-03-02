#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int x = 1;
    int *p = &x;
    (*p)++;
    cout << x << endl;
    return 0;
}