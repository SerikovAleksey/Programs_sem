#include <iostream>

int* copyarr(int* a, unsigned int size){
    int* new_array = new int[size];
    for (auto i = 0u; i < size; i++){
        new_array[i] = a[i] ;
    }
    return new_array;

}

int main () {
    int array[2] = {1,2};
    copyarr(array,2);
}