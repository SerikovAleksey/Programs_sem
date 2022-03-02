#include <iostream>
using namespace std;

char leveling(char c){
    if (c >= 'A' && c <= 'Z')
        c += 'a' - 'A';
    return c;
}
int main()
{
    char c;
    do
    {
        cin.get(c);
        cout <<leveling(c);
    } while (c != '\n');
    cout <<endl;
    return 0;
}