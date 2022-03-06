#include <iostream>
#include <algorithm>
#include <numeric>
#include <random>
#include <iterator>


//std::ostream& operator<< (std::ostream& os, std::vector<int> vector){
//    for (auto elem: vector) {
//        std::cout << elem << " ";
//    }
//    return os;
//}
template <typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T> vector){
    os << "[";
    std::copy(std::begin(vector), std::prev(std::end(vector)), std::ostream_iterator<T>(os, ", "));
    return os << *std::prev(std::end(vector)) << "]";
}

int main() {
//    1. Последовательность от 1 до 10
    std::vector<int> sequence_1(10);
    std::iota(std::begin(sequence_1), std::end(sequence_1), 1);
    std::cout << "1. Sequence S1 from 1 to 10: ";
    std::cout << sequence_1 << std::endl;

//    2. Добавил элементов в конец
    int value;
    std::cout << "Input the some value, please: ";
    std::cin >> value;
    std::cout << "Input " << value << " numbers, please: ";
    for (auto i = 0; i < value; i++) {
        int elem;
        std::cin >> elem;
        sequence_1.push_back(elem);
    }
    std::cout << "2. Added elements to the end: ";
    std::cout << sequence_1 << std::endl;

//    3. Перемешал П1
    std::shuffle(std::begin(sequence_1), std::end(sequence_1), std::mt19937{std::random_device{}()});
    std::cout << "3. Shuffled S1: ";
    std::cout << sequence_1 << std::endl;


//    4. Удалил дубликаыты из П1
    std::sort(std::begin(sequence_1), std::end(sequence_1));
    auto delete_1 = std::unique(std::begin(sequence_1), std::end(sequence_1));
    sequence_1.erase(delete_1, std::end(sequence_1));
    std::cout << "4. Removed similar elements from S1: ";
    std::cout << sequence_1 << std::endl;

//    5.Подсчитал кол-во нечетных элементов
    std::cout <<" 5. Calculated amount of odd elements from S1: ";
    std::cout << std::count_if(std::begin(sequence_1), std::end(sequence_1),[](auto elem){return elem % 2 == 0;});
    std::cout << std::endl;

//    6.Определил максимальное и минимальное значение
   std::cout << "6. Determined max and min elements from S1: ";
    auto [min, max] = std::minmax(std::begin(sequence_1), std::end(sequence_1));
    std::cout << *min << " " << *max << std::endl;

//    7. Нашел простое число
    std::cout << "7. Found a prime number: ";
auto simple = [](auto elem) {
    if (elem <= 2) return false;
    for (int i = 2; i < elem; i++) {
        if (elem % i == 0) {
            return false;
        }
    }
    return true;
};
    auto simple_num = std::find_if(std::begin(sequence_1), std::end(sequence_1), simple);
    std::cout<< "7: "<< *simple_num << std::endl;


//    8.Заменил в П1 все числа их квадратами
    std::cout << "8. Replaced in S1 all numbers with their squares: ";
    std::transform(std::begin(sequence_1), std::end(sequence_1),
                   std::begin(sequence_1),
                   [](auto elem){return elem * elem;});
    std::cout << sequence_1 << std::endl;

//    9. Создал последовательность П2 из N случайных чисел
    std::cout << "9. Created sequence S2 of N random numbers: ";
    std::vector<int> sequence_2(sequence_1.size());
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<> dis(0, sequence_1.size());
    std::generate(std::begin(sequence_2), std::end(sequence_2), std::bind(dis, std::ref(mt)));
    std::cout << sequence_2<< std::endl;

//    10.Вычислил сумму чисел в П2
    std::cout << "10. Calculated the sum of numbers from S2: ";
    auto sum = std::accumulate(std::begin(sequence_2), std::end(sequence_2), 0);
    std::cout << sum<< std::endl;

//    11. Заменил несколько первых чисел в П2 на 1
    std::cout << " 11. Replaced some of the first elements (1) in S1 : ";
    std::replace_if(std::begin(sequence_2), std::prev(std::end(sequence_2)) - 5,[](auto elem){ return elem;}, 1);
    std::cout<< sequence_2 << std::endl;

//    12. Последовательность П3 как разность П1 и П2
    std::cout << "12. Created S3 how difference S1 and S2: ";
    std::vector<int> sequence_3(sequence_1.size());
    std::transform(std::begin(sequence_1), std::end(sequence_1), std::begin(sequence_2), std::begin(sequence_3), [](auto lhs, auto rhs){return lhs - rhs;});
    std::cout<< sequence_3 << std::endl;

//    13. Заменил отрицательные элементы на 0
    std::cout << " 13. Replaced negative elements (0): ";
    std::replace_if(std::begin(sequence_3), std::end(sequence_3), [](auto elem){return elem < 0;}, 0);
    std::cout << sequence_3 << std::endl;

//    14. Удалил нулевые элементы в П3
    std::cout<< " 14. Removed null elements from S3: ";
    auto to_delete = std::remove_if(std::begin(sequence_3), std::end(sequence_3),
                                    [](auto element){return element == 0;});
    sequence_3.erase(to_delete, std::end(sequence_3));
    std::cout << sequence_3 << std::endl;

//    15. Изменил порядок следования элементов в П3
  std::cout << " 15. Reversed S3: ";
    std::reverse(std::begin(sequence_3), std::end(sequence_3));
    std::cout << sequence_3 << std::endl;

//    16. Определил 3 наибольших элемента в П3
    std::cout<< "16. The three largest elements were found: ";
    std::partial_sort(std::rbegin(sequence_3), std::rbegin(sequence_3) + 3, std::rend(sequence_3));
    for (auto i = 0; i < 3; i++) {
        std::cout << sequence_3[i] << " ";
    }
    std::cout << std::endl;

//    17. Отсортировал П1 и П2
    std::cout << "17. Sorted S1 and S2: ";
    std::sort(std::begin(sequence_1), std::end(sequence_1));
    std::sort(std::begin(sequence_2), std::end(sequence_2));
    std::cout << "S1= " << sequence_1 << std::endl;
    std::cout << "S2= " << sequence_2 << std::endl;

//    18. Создал П4 как слияние П1 и П2
  std::cout << "18. Created S4 how the merge S1 and S2: ";
    std::vector<int> sequence_4;
    std::merge(std::begin(sequence_1), std::end(sequence_1), std::begin(sequence_2), std::end(sequence_2), std::back_inserter(sequence_4));
    std::cout << sequence_4 << std::endl;

//    19. Определил диапазон для упорядоченной вставки 1 в П4
  std::cout << "19. The range for ordered input 1 in S4 is found: ";
    auto range = std::equal_range(std::begin(sequence_4), std::end(sequence_4), 1);
    std::cout << "("<< *range.first << "; " << *range.second << ")"<< std::endl;

//   20. Вывел все последовательности
  std::cout << "20. Output of all sequences: ";
    std::cout << "S1 = " << sequence_1 << std::endl << "S2 = " << sequence_2 <<
    std::endl << "S3 = " << sequence_3 << std::endl << "S4 = " << sequence_4 << std::endl;
}
