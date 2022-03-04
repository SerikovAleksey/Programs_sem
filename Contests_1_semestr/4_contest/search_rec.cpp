#include <iostream>
using namespace std;

int search_rec(int x, int* array, int n) {
    for (int i = 0; i < n; i++) {
        if (array[i] == x) return i;
        else continue;
    }
    if (array[n-1] != x) return -1;
}

int main()
{
    int n, a[100], x;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        cout << search_rec(x, a, n) << " ";
    }
    cout << endl;
    return 0;
}