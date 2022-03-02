#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swap_arrays(int n, int* array_0, int* array_1){
    for (auto i = 0; i < n; i++){
        array_1[i] += array_0[i];
    }
}

int main()
{
    int a[10];
    int* p = new int[10];
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    for (int i = 0; i < 10; i++)
        p[i] = 0;

    swap_arrays(10, a, p);

    for (int i = 0; i < 10; i++)
        cout << p[i] << " ";
    cout << endl;
    delete[] p;
    return 0;
}