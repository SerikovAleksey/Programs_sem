#include <iostream>

int main () {
    long long int size, sum = 1;
    std:: cin >> size;
    size *= 1024 * 1024 ;
    for(auto i = 2ll; i < size; i *= 2){
        sum++;
    }
        if(sum % 8 != 0) sum += 8;
        std::cout << sum / 8;
}