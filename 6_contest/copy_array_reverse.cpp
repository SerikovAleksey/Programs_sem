#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void copy_array_reverse(int n, char* array_source, char* array_destination){
for (auto i = n - 1, j = 0; i >= 0; i--, j++){
    array_destination[j] = array_source[i];
}
}

int main()
{
    char a[] = {"Hello there."};
    char b[] = {"General Kenobi..."};
    copy_array_reverse(6, a, b + 4);
    cout << b << endl;
    return 0;
}