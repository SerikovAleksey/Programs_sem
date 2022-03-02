#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct Vector
{
    int coord[3];
};
const int N = 10;

bool equal(Vector* a, Vector* b){
 for (auto i = 0; i < 3; i++)
     if (a->coord[i] != b->coord[i]) return false;
      return true;
}

int main()
{
    Vector polygon[N];
    for (int i = 0; i < N; i++)
        cin >> polygon[i].coord[0] >> polygon[i].coord[1] >> polygon[i].coord[2];

    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N - 1; j++)
            if (!equal(polygon + j, polygon + j + 1))
            {
                cout << "Inequality detected!" << endl;
                return 0;
            }
    cout << "Equality detected!" << endl;
    return 0;
}