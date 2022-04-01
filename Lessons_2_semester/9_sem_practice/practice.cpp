#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
#include <thread>

bool operator<(std::vector<int> lhs, std::vector<int> rhs) {
    for (auto i = 0u; i < lhs.size(); i++) {
        if (lhs[i] < rhs[i])return (lhs[i] < rhs[i]);
    }
    return false;
}
auto transformed (std::vector<int>::iterator begin, std::vector<int>::iterator middle) {
    std::transform(begin, begin, middle, [](auto item){return item * item;});
}

int main() {
//1:
    std::vector<int> sequence_1 = {1, 2, 3, 4, 5, 6};
    std::reverse(std::begin(sequence_1), std::end(sequence_1));
    for (auto elem: sequence_1) {
//        std::cout << elem << " ";
    }
//2:
    std::string word = "analizing";
    auto deleted = std::remove_if(std::begin(word), std::end(word), [](auto elem) { return elem == 'a'; });
    word.erase(deleted, std::end(word));
//    std::cout << word;
//3:
    std::vector<int> sequence_2 = {1, 2, 3, 4, 5, 7};
//    std::cout << (sequence_1 < sequence_2);

//4:
    std::vector<int> sequence_3 = {1, 1, 1, 1, 1, 1};
    std::set<int> nums;
    for (auto item: sequence_3) {
        nums.insert(item);
    }
    for (auto item: nums) {
//        std::cout << item;
    }

//5:
    std::set<int> numbers = {1, 2, 3, 5, 7, 9};
    for (auto it = std::rbegin(numbers); it != std::rend(numbers); it++) {
//        std::cout << *(it) << " ";
    }

//6:
    int n;
//    std::cin >> n;
    for (auto i = 0u; i < n; i++) {
        for (auto j = 0u; j <= i; j++){
//            std::cout << '*';
        }
//        std::cout << std::endl;
    }
    for (auto i = n - 1; i > 0; i--) {
        for (auto j = i; j > 0; j--){
//            std::cout << '*';
        }
//        std::cout << std::endl;
    }
//7:
    std::vector<int> sequence_4 = {3, 2, 5, 4, 7, 6};
    std::vector<int> odd_numbers;
    for (auto item: sequence_4) {
        if (item % 2 != 0) {
            odd_numbers.push_back(item);
        }
    }
    std::sort(std::begin(odd_numbers), std::end(odd_numbers));
    auto deleted_1 = std::remove_if(std::begin(sequence_4), std::end(sequence_4), [](auto elem){return elem % 2 != 0;});
    sequence_4.erase(deleted_1, std::end(sequence_4));
    std::sort(std::begin(sequence_4), std::end(sequence_4));
    std::copy(std::begin(sequence_4), std::end(sequence_4), std::back_inserter(odd_numbers));
    for (auto elem: odd_numbers) {
        std::cout << elem << " ";
    }

//8:
    std::vector<int> parallel;
    std::thread other_thread(transformed,std::begin(sequence_4), std::end(sequence_4), std::ref(parallel));

}



