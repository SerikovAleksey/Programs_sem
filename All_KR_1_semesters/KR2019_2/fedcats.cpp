#include <iostream>
using namespace std;

struct Coon {
        unsigned int id; // номер кота
        char name[100];  // имя кота
        double weight;   // вес кота
        double food;     // вес съеденной котом пищи
};

bool operator<(Coon lhs, Coon rhs) {
    return lhs.food / lhs.weight < rhs.food / rhs.weight;
}

Coon* find_the_most_fed_cat(Coon* atc, unsigned int n_cats){
    Coon* max = atc;
    for (auto i = 1; i < n_cats; i++) {
      if (*max < atc[i]){
          *max = atc[i];
      }
    }
    return max;
}

int main()
{
    Coon all_the_coons[1000];
    unsigned int n;
    cin >>n;
    for (unsigned int i = 0; i < n; i++) {
        cin >>all_the_coons[i].id >>all_the_coons[i].name >>all_the_coons[i].weight >>all_the_coons[i].food;
    }
    cout <<find_the_most_fed_cat(all_the_coons, n)->name <<endl;
    return 0;
}