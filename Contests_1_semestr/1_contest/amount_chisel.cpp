#include <iostream>

using namespace std;

bool is_a_number(char c){
    if (c >= '0' && c <= '9') return true;
    return false;
}

int main()
{
    char c;
    unsigned int kol = 0;
    do
    {
        std::cin >>c;
        if (is_a_number(c))
            kol ++;
    } while (c != '@');
    std::cout <<kol <<std::endl;
    return 0;
}
