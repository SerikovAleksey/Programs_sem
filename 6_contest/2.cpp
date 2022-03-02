#include <iostream>
using std::cout;
using std::endl;

int main()
{
    char a[11] = {"0123401234"};
    char *p = a;
    cout << (int)(*(p + 7) - *p) << endl;
    return 0;
}