#include <iostream>
#include <vector>

int main (){
std::size_t n;
std::cin >> n;
std::vector<int> elements(n);
for (auto& elem: elements){
    std::cin >> elem;
}
auto initial = n / 2;
for (auto i = 0; i < n; i++){
    initial += (i % 2 == 0) ? i : -i;
    std::cout << elements[initial] << " ";
}
}