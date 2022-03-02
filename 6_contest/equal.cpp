#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct Vector
{
    int coord[3];
};
const int N = 10;

bool equal(Vector a, Vector b){
    if (a.coord[0] == b.coord[0] and a.coord[1] == b.coord[1] and a.coord[2] == b.coord[2]) {
        return true;
    }else return false;
}

int main()
{
    Vector polygon[N];
    for (int i = 0; i < N; i++)
        cin >> polygon[i].coord[0] >> polygon[i].coord[1] >> polygon[i].coord[2];

    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N - 1; j++)
            if (!equal(polygon[j], polygon[j + 1]))
            {
                cout << "Inequality detected!" << endl;
                return 0;
            }
    cout << "Equality detected!" << endl;
    return 0;
}
