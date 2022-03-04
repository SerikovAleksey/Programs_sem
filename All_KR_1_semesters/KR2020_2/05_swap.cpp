typedef struct list_element {
    int value;                  // Значение данного элемента
    struct list_element* next;  // Указатель на следующий элемент списка
    struct list_element* prev;	// Указатель на предыдущий элемент списка
} list_element;

void swap_elements(list_element* a, list_element* b) {
    list_element* a_l = a->prev;
    list_element* a_r = a->next;
    list_element* b_r = b->next;
    list_element* b_l = b->prev;

    a_l->next = b;
    b->prev = a_l;

    if (a_r != b) {
        b->next = a_r;
        if (a_r != nullptr)
        a_r->prev = b;

        b_l->next = a;
        a->prev = b_l;
    }else {
        b->next = a;
        a->prev = b;
    }
    a->next = b_r;
    if (b_r != nullptr)
        b_r->prev = a;
}