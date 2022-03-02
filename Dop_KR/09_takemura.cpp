#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha;

struct Employee {
    char name[N_STR];
    char surname[N_STR];
    unsigned int n_implants;
    char implant_type[N_IMPLANTS]; // 'p' - personal, 'c' - corporate, 'u' - unidentified, 'i' - illegal
    bool implant_on[N_IMPLANTS];
    char id[N_STR];
    unsigned int department;
};
void dismissal(Employee* e){
    for (auto i = 0u; i < e->n_implants; i++) {
        if (e->implant_type[i] == 'c'){
            e->implant_on[i] = false;
        }
    }
}

int main()
{
     Employee staff[] = {
            {"Saburo", "Arasaka", 10,
                    {'p', 'c', 'p', 'p', 'c', 'c', 'p', 'p', 'p', 'c'},
                    {true, true, true, true, true, true, true, true, true, true},
                    "dsarg325dr", 0},
            {"Hanako", "Arasaka", 8,
                    {'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c'},
                    {true, true, true, true, true, true, true, true},
                    "hjw34k25dr", 0},
            {"Goro", "Takemura", 10,
                    {'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c'},
                    {true, true, true, true, true, true, true, true, false, true},
                    "72354df5dr", 1},
            {"Frank", "Nostra", 5,
                    {'c', 'p', 'i', 'i', 'p'},
                    {true, true, true, true, true},
                    "jhvu7666dr", 53},
            {"Valerie", "V", 6,
                    {'c', 'u', 'c', 'p', 'p', 'p'},
                    {true, true, true, true, false, true},
                    "72354df5dr", 1}
    };

    dismissal(&(staff[2]));
    for (unsigned int s = 0; s < 5; s++)
    {
        cout << staff[s].surname << " " << boolalpha;
        for (unsigned int i = 0; i < staff[s].n_implants; i++)
            cout << staff[s].implant_on[i] << " ";
        cout << endl;
    }

// Ожидаемый вывод:
// Arasaka true true true true true true true true true true
// Arasaka true true true true true true true true
// Takemura false false false false false false false false false false
// Nostra true true true true true
// V true true true true false true

    return 0;
}