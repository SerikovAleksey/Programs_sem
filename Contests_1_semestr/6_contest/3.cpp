#include <iostream>
using std::cout;
using std::endl;

void decr(int *px){
    (*px)--;
}

int main()
{
    int x = 10;
    decr(&x);
    cout << x << endl;
    return 0;
}