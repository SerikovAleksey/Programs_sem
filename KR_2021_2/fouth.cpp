#include <iostream>


using std::cout;
using std::endl;
using std::cin;

#include <vector>
void separate_rgba(unsigned int *data, unsigned int n){
    std::vector<unsigned int> cur(n*4);
    for (auto j = 0u; j < n * 4; j++) {
        cur[j] = data[j];
    }
    int k = 0;
    for (auto j = 0u; j < n; j++) {
            data[j] = cur[j * 4];
            k++;
    }
    for (auto j = 0u; j < n; j++) {
        data[k] = cur[j * 4 + 1];
        k++;
    }
    for (auto j = 0u; j < n; j++) {
        data[k] = cur[j * 4 + 2];
        k++;
    }
    for (auto j = 0u; j < n; j++) {
        data[k] = cur[j * 4 + 3];
        k++;
    }
}

int main()
{
    unsigned int n;
    cin >> n;
    unsigned int* data = new unsigned int[4*n];
    for (unsigned int i = 0; i < 4*n; i++)
        cin >> data[i];
    separate_rgba(data, n);
    for (unsigned int i = 0; i < 4*n; i++)
        cout << data[i] << " ";
    cout << endl;
    delete[] data;
    return 0;
}