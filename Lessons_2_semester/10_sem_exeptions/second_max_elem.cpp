#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

int main () {
    int T;
//    Создал две map-ы (в одной будут исходные числа, в другой результат)
    std::map<int, std::vector<int>> sequences;
    std::map<int, std::vector<int>> subsequences;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        int size_sequence, size_subsequence;
        std::cin >> size_sequence >> size_subsequence;
//        Заполняю первую map-у
        for (auto j = 0; j < size_sequence; j++) {
            int num;
            std::cin >> num;
            sequences[i].push_back(num);
        }
//        Создаю новый вектор, в который копирую нужного размера подпоследовательности
        for (auto k = 0u; k < size_sequence; k++) {
            std::vector<int> copy;
//            Проверка, чтобы итератор не ушел за end
            if (std::next(std::begin(sequences[i]), k) + size_subsequence <= std::end(sequences[i])) {
//                Заполняю этот вектор
                std::copy(std::next(std::begin(sequences[i]), k),
                          std::next(std::begin(sequences[i]), k) + size_subsequence,
                          std::back_inserter(copy));
//                Сортирую его
                std::sort(std::begin(copy), std::end(copy));
//                Загружаю результат во вторую map-у
//                Проверяю размер подпоследовательности (если он равен 1, то вывожу это одно число)
            if (size_subsequence != 1) {
                subsequences[i].push_back(copy[size_subsequence - 2]);
            } else {
                subsequences[i].push_back(copy[0]);
            }
            }
        }
    }
//    Вывожу элементы из второй map-ы
    for (const auto& sub: subsequences) {
        for (auto elem: sub.second){
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}