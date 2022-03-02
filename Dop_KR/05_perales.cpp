#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha;



bool rewrite_memories(int* begin, int* end, int* fake, unsigned int n){
    if (end - begin + 1 == n){
        for (auto i = 0u; i < n; i++){
            begin[i] = fake[i];
        }
        return true;
    }
    if(n < end - begin + 1){
        for (auto i = 0u; i < n; i++){
            begin[i] = fake[i];
        }
        return false;
    }
        for (auto i = 0u; i < end - begin + 1; i++){
            begin[i] = fake[i];
        }
        return false;
}


int main()
{
    int memories[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int fakes[5] = {300, 400, 500, 600, 700};
    cout << boolalpha;

    cout << rewrite_memories(memories + 3, memories + 7, fakes, 5) << endl;
    // переписано корректно
    for (unsigned int i = 0; i < 10; i++)
        cout << memories[i] <<" ";
    cout << endl; // 0 1 2 300 400 500 600 700 8 9

    cout << rewrite_memories(memories + 5, memories + 6, fakes, 5) << endl;
    // переписано некорректно, fakes слишком большой
    for (unsigned int i = 0; i < 10; i++)
        cout << memories[i] <<" ";
    cout << endl; // 0 1 2 300 400 300 400 700 8 9

    cout << rewrite_memories(memories, memories + 4, fakes, 3) << endl;
    // переписано некорректно, fakes слишком мал
    for (unsigned int i = 0; i < 10; i++)
        cout << memories[i] <<" ";
    cout << endl; // 300 400 500 300 400 300 400 700 8 9

    return 0;
}