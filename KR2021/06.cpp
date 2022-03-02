#include <iostream>
using std::cout;
using std::endl;
using std::cin;

struct Book
{
    unsigned long int id;
    unsigned int pages;
    unsigned long int color;
    unsigned int hindex;
    float h, w;
};

bool first_bigger_for_scientist(Book a, Book b){
    if (a.hindex != b.hindex) return a.hindex > b.hindex;
    else if (a.pages != b.pages) return a.pages > b.pages;
    else return false;

}
bool first_bigger_for_designer(Book a, Book b){
    if (a.color != b.color) return a.color > b.color;
    else if (a.h != b.h) return  a.h > b.h;
    else return false;
}



int main()
{
    Book shelf[100]; // полка фиксированного размера
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> shelf[i].id >> shelf[i].pages >> shelf[i].color >> shelf[i].hindex >> shelf[i].h >> shelf[i].w;

    // ученый сортирует книги пузырьком
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1; j++)
            if (first_bigger_for_scientist(shelf[j], shelf[j + 1]))
            {
                Book temp = shelf[j];
                shelf[j] = shelf[j + 1];
                shelf[j + 1] = temp;
            }

    // дизайнер использует метод простого выбора
    int grey = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int index_max = 0;
        for (int j = 1; j < n - i; j++)
            if (first_bigger_for_designer(shelf[j], shelf[index_max]))
                index_max = j;
        if (index_max == n - 1 - i) continue;
        Book temp = shelf[index_max];
        shelf[index_max] = shelf[n - 1 - i];
        shelf[n - 1 - i] = temp;
        grey++;
    }

    // эти строки можно раскомментировать и использовать для отладки
    //for (int i = 0; i < n; i++)
    //    cout << shelf[i].id << " " << shelf[i].pages << " " << shelf[i].color << " " << shelf[i].hindex << " " << shelf[i].h << " " << shelf[i].w << endl;
    //cout << endl;

    cout << grey << endl;
    return 0;
}