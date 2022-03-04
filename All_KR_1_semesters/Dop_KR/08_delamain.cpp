#include<iostream>
using namespace std;

struct BehaviorPattern {
    char* cyphered_data;
    unsigned long long int length; 	// terabytes
    unsigned int type;		// 0 - neutral, 1 - friendly, 2 - agressive, 3 - cowardly, 4 - paranoid, 5 - pseudorandom
    BehaviorPattern* next;      // Pointer to next element
    BehaviorPattern* prev;	// Pointer to previous element
};


BehaviorPattern* create_list_element(unsigned long long int l, unsigned char t)
{
    BehaviorPattern* new_elem = new BehaviorPattern;
    new_elem->length = l;
    new_elem->type = t;
    new_elem->cyphered_data = new char[l*100];
    new_elem->next = NULL;
    new_elem->prev = NULL;
    return new_elem;
}

BehaviorPattern* insert_into_list(BehaviorPattern* root, BehaviorPattern* elem)
{
    if(elem == NULL)
        return root;

    elem->next = root;
    if(root != NULL)
        root->prev = elem;
    return elem;
}

void print_list(BehaviorPattern* root)
{
    BehaviorPattern* elem = root;
    while(elem != NULL) {
        cout << elem->type << " " << elem->length << endl;
        elem->prev = root + 100; // oops we broke prevs
        elem = elem->next;
    }
}

void print_reverse_list(BehaviorPattern* root)
{
    if (!root) return;
    BehaviorPattern* elem = root;
    while(elem->next != NULL)
        elem = elem->next;
    while (elem != NULL)
    {
        cout << elem->type << " " << elem->length << endl;
        elem = elem->prev;
    }
}

void delete_list(BehaviorPattern* root)
{
    BehaviorPattern* elem = root;
    BehaviorPattern* to_delete = NULL;
    while(elem != NULL) {
        to_delete = elem;
        elem = elem->next;
        if(to_delete != NULL)
        {
            delete[] to_delete->cyphered_data;
            delete to_delete;
        }
    }
}

void fix_list(BehaviorPattern* root){
    if (root == 0) return;
    for (BehaviorPattern* cur = root; cur->next; cur = cur->next){
        if(cur->next->prev != cur ) cur->next->prev = cur;
    }
}

int main()
{
    BehaviorPattern* root = NULL;
    for(int i = 0; i < 6; i++)
    {
        BehaviorPattern* elem = create_list_element(i + 10, i);
        root = insert_into_list(root, elem);
    }

    print_list(root);
    fix_list(root);
    print_reverse_list(root);

// Ожидаемый вывод:
// 5 15
// 4 14
// 3 13
// 2 12
// 1 11
// 0 10
// 0 10
// 1 11
// 2 12
// 3 13
// 4 14
// 5 15

    delete_list(root);
    return 0;
}
