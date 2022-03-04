#include<iostream>

using namespace std;

// Struct to store list element
typedef struct list_element {
    int value;                      // Element value
    struct list_element* next;      // Pointer to next element
    struct list_element* prev;	// Pointer to previous element
} list_element;

// Create new element, set its value to 'i', return pointer to new element
list_element* create_list_element(int i)
{
    list_element* new_elem = new list_element;
    new_elem->value = i;
    new_elem->next = NULL;
    new_elem->prev = NULL;
    return new_elem;
}

// Insert element 'elem' into list 'root'
list_element* insert_into_list(list_element* root, list_element* elem)
{
    if(elem == NULL)
        return root;

    elem->next = root;
    if(root != NULL)
        root->prev = elem;
    return elem;
}

// Print list
void print_list(list_element* root)
{
    list_element* elem = root;
    while(elem != NULL) {
        cout << "Val = " << elem->value << endl;
        elem = elem->next;
    }
}

// Delete list
void delete_list(list_element* root)
{
    list_element* elem = root;
    list_element* to_delete = NULL;
    while(elem != NULL) {
        to_delete = elem;
        elem = elem->next;
        if(to_delete != NULL)
            delete to_delete;
    }
}

// TODO: implement this
int find_prev_value(list_element* root, int value){
    if (root == NULL) return 0;
    for (list_element* cur = root; cur->next; cur = cur->next) {
        if (cur->value == value && cur->prev != NULL) return cur->prev->value;
    }
    return 0;
}

int main()
{
    int value = 25;
    list_element* root = NULL;
    for(int i = 0; i < 10; i++)
    {
        list_element* elem = create_list_element(i * i);
        root = insert_into_list(root, elem);
    }

    cout << "List:" << endl;
    print_list(root);

    cout << "value = " << value << endl;

    cout << "result of your search: " << find_prev_value(root, value) << endl;

    delete_list(root);
    return 0;
}
