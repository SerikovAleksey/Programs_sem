#include <iostream>
#include <string>
using std::cout, std::endl, std::boolalpha;

template<typename T>
bool check_them(T& x, T& y, T& z);

struct student {
    std::string name;
    std::string id_number_string;
};

bool operator==(student& lhs, student& rhs) {
    return lhs.id_number_string == rhs.id_number_string;
}

int main()
{
    student a = {"Andy", "1234 123123"};
    student b = {"Andrew", "1234 123123"};
    student c = {"Andy", "1234123123"};
    cout << boolalpha << "Check result is: " << check_them(a, b, c) << endl;
    return 0;
}