#include <iostream>
#include <string>

using std::cout, std::string, std::endl;

template<typename T>
T get_min_value(T lhs, T rhs) {
    if (lhs > rhs) {
        return rhs;
    }
    return lhs;
}

int main()
{
    int a = 5;
    int b = 4;
    string s1 = "abc";
    string s2 = "zxc";
    cout << "Min int: " << get_min_value(a, b) << endl;
    cout << "Min string: " << get_min_value(s1, s2) << endl;
    return 0;
}