#include <iostream>
#include <vector>

void read_array(unsigned int** data, unsigned int* n){
    int a;
    std::vector<unsigned> array;
    for (;std::cin >> a;){
        array.push_back(a);
    }
    *n = array.size();
    (*data) = new unsigned [array.size()];
    for (auto i = 0u; i < array.size(); i++){
        (*data)[i] = array[i];
    }
}
