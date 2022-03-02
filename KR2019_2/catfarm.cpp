#include <iostream>
#include <cstring>
using namespace std;

struct Animal {
    unsigned int type_id;
    char name[100];
    struct Animal* next;
    struct Event* history;
};

struct Event {
    unsigned int timestamp;
    char description[1024];
    struct Event* next;
};

// Эту функцию нужно реализовать
// Implement this
#include <cstring>
struct Animal* merge(struct Animal* list_one, struct Animal* list_two){
    if (!(list_one->next) || !(list_two->next)) return NULL;
    for(Animal* cur = list_one; cur->next; cur = cur->next){
        if ((cur->next->next) == NULL) cur->next->next = list_two;
         list_two = NULL;
    }
    return list_one;
}


// Init animal history record
struct Event* create_history_record(unsigned int timestamp, const char description[1024]) {
    Event* e = new struct Event;
    e->timestamp = timestamp;
    strcpy(e->description, description);
    e->next = NULL;
    return e;
}

// Append new record to the history
struct Event* insert_into_history(struct Event* history, struct Event* record) {
    if(history == NULL) {
        return record;
    }
    struct Event* e = history;
    while(e->next != NULL) {
        e = e->next;
    }
    e->next = record;
    return history;
}

// Init animal record
struct Animal* create_animal(unsigned int type_id, const char name[100]) {
    Animal* a = new struct Animal;
    a->type_id = type_id;
    strcpy(a->name, name);
    a->next = NULL;
    a->history = NULL;
    return a;
}

// Append new animal to the farm
struct Animal* add_to_farm(struct Animal* farm, struct Animal* animal) {
    if(farm == NULL) {
        return animal;
    }
    struct Animal* a = farm;
    while(a->next != NULL) {
        a = a->next;
    }
    a->next = animal;
    return farm;
}

// Prints complete farm info
void print_farm(Animal* farm) {
    struct Animal* a = farm;
    while(a != NULL) {
        cout << a->name << " (type " << a->type_id << "):" << endl;
        struct Event* e = a->history;
        while(e != NULL) {
            cout << "  " << e->timestamp << ": " << e->description << endl;
            e = e->next;
        }
        a = a->next;
    }
}

// Cleans up everything
void destroy_farm(Animal* farm) {
    struct Animal* old_a;
    struct Animal* a = farm;
    while(a != NULL) {
        struct Event* old_e;
        struct Event* e = a->history;
        while(e != NULL) {
            old_e = e;
            e = e->next;
            delete old_e;
        }
        old_a = a;
        a = a->next;
        delete old_a;
    }
}

int main()
{
    Animal* farm1 = NULL;

    Animal* cat1 = create_animal(1, (char*)"Barsik");
    cat1->history = insert_into_history(cat1->history, create_history_record(1024, (char *)"Cat was born"));
    cat1->history = insert_into_history(cat1->history, create_history_record(1025, (char *)"Cat ate smth"));
    cat1->history = insert_into_history(cat1->history, create_history_record(1040, (char *)"Cat did smth else"));
    farm1 = add_to_farm(farm1, cat1);

    Animal* cat2 = create_animal(42, (char*)"Astral");
    cat2->history = insert_into_history(cat2->history, create_history_record(1900, (char *)"Cat was found next to the door"));
    cat2->history = insert_into_history(cat2->history, create_history_record(1910, (char *)"We tried to wash the cat, but failed"));
    cat2->history = insert_into_history(cat2->history, create_history_record(1912, (char *)"Cat went somewhere"));
    farm1 = add_to_farm(farm1, cat2);

    Animal* farm2 = NULL;

    Animal* cat3 = create_animal(11, (char*)"Lord");
    cat3->history = insert_into_history(cat3->history, create_history_record(1234, (char *)"Cat was born"));
    farm2 = add_to_farm(farm2, cat3);

    Animal* cat4 = create_animal(42, (char*)"Moorzeek");
    cat4->history = insert_into_history(cat4->history, create_history_record(1900, (char *)"We caught the cat"));
    cat4->history = insert_into_history(cat4->history, create_history_record(1910, (char *)"Cat caugth the mouse"));
    farm2 = add_to_farm(farm2, cat4);

    Animal* farm = merge(farm1, farm2);

    print_farm(farm);

    destroy_farm(farm);
    return 0;
}