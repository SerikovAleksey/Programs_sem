typedef struct list_element {
    int value;                  // Значение данного элемента
    struct list_element* next;  // Указатель на следующий элемент списка
    struct list_element* prev;	// Указатель на предыдущий элемент списка
} list_element;

void fix_list(list_element* head, list_element* tail) {
    for (list_element* cur = head; cur->next && cur != tail; cur = cur->next){
        if(!(cur->next->prev)) cur->next->prev = cur;
    }
  for (list_element* cur = tail; cur->prev && cur != head; cur = cur->prev){
        if(!(cur->prev->next)) cur->prev->next = cur;
    }
}