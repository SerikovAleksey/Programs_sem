#include <iostream>

struct vect {
    int x;
    int y;
    int z;
};

struct vect sum(struct vect a, struct vect b){
    vect c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    c.z = a.z + b.z;
    return c;
};

int main() {

}