#include <iostream>
using namespace std;

unsigned long get_really_any_hexadecimal(){
    char n;
    unsigned long int sum = 0;
    do{
        cin.get (n);
        if  (n >= 'A' and n <= 'F')
            sum = n - 55 + sum*16;
        if (n >= 'a' and n <= 'f')
            sum = n - 87 + sum*16;
        if (n>='0' and n<='9')
            sum = n - 48 + sum*16;
    }while (n != '\n' and n != ' ');
    return sum;
}

int main()
{
    cout <<get_really_any_hexadecimal() <<endl;
    return 0;
}