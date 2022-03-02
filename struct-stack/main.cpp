// vector, array, deque
// list, forward_list
// stack, queue

#include <vector>
#include <iostream>
#include <deque>

// дефайн для forever
#define ever (;;)

// шаблонный класс stack-а
template <typename T>
struct Stack {

    // добавить элемент на вершину стека
    void push(T element) {
        elements.push_back(element);
    }

    // убрать элемент с вершины стека
    void pop() {
        elements.pop_back();
    }

    // посмотреть элемент на вершине стека
    T top() {
        return elements.back();
    }

    // проверить стек на пустоту
    auto empty() {
        return elements.empty();
    }

    // вектор, используемый в качестве контейнера
    std::vector<T> elements;

};

// Структура узла для листа
template <typename T>
struct Node {
    T data;
    Node* next;
};

// односторонний лист
template <typename T>
struct ForwardList {

    // конструктор
    ForwardList() {
        first_node = new Node<T>;
        first_node->data = 0;
        first_node->next = nullptr;
    }

    // добавление в конец
    void push_back(T element) {
        auto current_node = first_node;
        for ever {
            if (current_node->next) {
                current_node = current_node->next;
            } else {
                current_node->next = new Node<T>;
                current_node->next->data = element;
                current_node->next->next = nullptr;
                break;
            }
        }
    }

    // удаление первого узла с данным значением
    void delete_first_which_has_this_value(T value) {
        for(auto node = first_node; node->next; node = node->next) {
            if(node->next->data == value) {
                auto next_of_next = node->next->next;
                delete node->next;
                node->next = next_of_next;
                break;
            }
        }
    }

    // деструктор, освобождение данных
    ~ForwardList() {
        for(auto node = first_node; node;) {
            auto next_node = node->next;
            delete node;
            node = next_node;
        }
    }

    // ссылка на первый узел
    Node<T>* first_node;
};

// шаблон функции минимума
template <typename FirstType, typename SecondType>
auto min(FirstType x, SecondType y) {
    return (x < y) ? x : y;
}

// Standard template library -- STL
// так называется стандартная библиотека
// это говорит о том, что шаблоны -- одно из ключевых
// понятий в C++

int main() {
    // берём и применяем функцию для разных элементов
//    std::cout << min(30, '2') << std::endl;

    // deque -- double-ended queue
    // -- двусторонняя очередь
    // работа с декой

//    std::deque<int> numbers;
//    numbers.push_back(5);
//    numbers.push_front(42);
//    numbers.push_front(4);
//    numbers.push_back(19);

//    for(auto i = 0u; i < numbers.size(); i++) {
//        std::cout << numbers[i] << ' ';
//    }

    // работа с листом даблов
    ForwardList<double> forwardList;
    forwardList.push_back(5.);
    forwardList.push_back(42.6);
    forwardList.push_back(43.1);
    forwardList.push_back(44.);

    // итерация
    for(auto node = forwardList.first_node->next; node; node = node->next) {
        std::cout << node->data << ' ';
    }

    std::cout << std::endl;

    // удаляем первый элемент с таким значением
    forwardList.delete_first_which_has_this_value(43.1);

    for(auto node = forwardList.first_node->next; node; node = node->next) {
        std::cout << node->data << ' ';
    }


    // работа с двумя разными стеками
//    Stack<bool> stack;
//    stack.push(true);
//    stack.push(false);
//    std::cout << stack.top() << std::endl;
//    stack.pop();
//    std::cout << stack.top() << std::endl;
//
//    Stack<double> stack_doubles;
//    stack_doubles.push(5.22);
//    stack_doubles.push(3.0);
//    std::cout << stack_doubles.top() << std::endl;
//    stack_doubles.pop();
//    std::cout << stack_doubles.top() << std::endl;

}