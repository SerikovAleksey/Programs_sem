#include <iostream>

int main (){
    char string [10000]= "";
    int summa;
    summa = 0;
    std::cin >> string;
    for (int i = 0; i <= sizeof(string); i++) {
        if (string [i] == '1')
            summa ++;
        else if (string [i] == '0')
            continue;
        else break;
    }
    std::cout << summa;
    return 0;
}