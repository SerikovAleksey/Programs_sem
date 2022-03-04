#include <iostream>
#include <vector>

int main() {
    std::vector<int> array;
    int n;
    std::cin >> n;
    array.resize(n);
    for (auto i = 0u; i < n; i++) {
        int numbers;
        std::cin >> numbers;
        array[i] = numbers;
    }
    std::vector<int> array_num;
    array_num.resize(n);
    bool r;
    int m, j;
    int max = 0, num = 0;
    std::cin >> m;
    for (int i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            if ( array[j] > max){
                r = true;
                for (int e = 0; e < i; e++)
                    if (array_num[e] == j)
                        r = false;
                if (r) {
                    max = array[j];
                    num = j;
                }
            }
        array_num[i] = num;
        max = 0;
    }
    for(int i = 0; i<m; i++)
        for(int j = 0; j<m-1; j++)
            if(array_num[j] > array_num[j+1]) std:: swap(array_num[j], array_num[j+1]);
    for(int i = 0; i<m; i++)
        std::cout << array[array_num[i]] << ' ';
}