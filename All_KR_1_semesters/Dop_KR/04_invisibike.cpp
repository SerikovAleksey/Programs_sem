#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct Vehicle {
    unsigned int id;
    char name[20];
    bool is_visible;
    int type; 		// 0 - car, 1 - bike, 2 - horse, 3 - human
    float x, y, z; 		// coordinates
    float vx, vy, vz;	// velocity
};

unsigned int how_many_invisible_bikes(Vehicle* v, unsigned int n) {
    int sum = 0;
    for (auto i = 0u; i < n; i++) {
        if (v[i].is_visible == 0 && v[i].type == 1) sum++;
    }
    return sum;
}

int main()
{
    Vehicle stat[5] = {
            {48678, "Astra", true, 0, 0, 0, 0, 1, 1, 0},
            {23455, "Kusanagi", false, 1, 100, 0, 0, 1, 1, 0},
            {35463, "Chevalier", false, 0, 0, 0, 0, 1, 1, 0},
            {82634, "Scorpion", true, 1, 0, 0, 0, 10, 10, 0},
            {23434, "Excalibur", false, 0, 1, 100, 0, 0, 0, 0}
    };
    cout << how_many_invisible_bikes(stat, 5) << endl; // ваша функция должна найти тут один невидимый мотоцикл
    return 0;
}