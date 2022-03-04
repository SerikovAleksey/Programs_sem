#include <iostream>

void binary(unsigned int n){
    if (n==0) std::cout << 0;
    int a[200], i=0;
    for (i;n>0;n=(n-n%2)/2, i++){
        a[i]=n%2;
    }
    for (int k=i-1;k>=0;k--) {
        std::cout << a[k];
    }
}

int main()
{
    unsigned int n;
    std::cin >>n;
    binary(n);
    std::cout << std::endl;
    return 0;
}