#include <iostream>
#include <cmath>
using namespace std;

void bin(int x){
    int a[200], i;
    for(i = 0; x>0; ++i){
        a[i] = x%2;
        x = (x-x%2)/2;
    }
    for(int j = i-1; j>=0;j--)
        if (a[j]==1)
            cout << a[j];
    for(int j = i-1; j>=0;j--)
        if (a[j]==0)
            cout << a[j];
}

int main(){
    int x;
    cin >> x;
    if(x == 0)
        cout << 0;
    else
        bin(x);
}