#include <fstream>
#include <iostream>
#include <vector>
#include <map>
#include <set>

int amount_of_specific_letters(std::string& nickname,std::vector<char> specific_letters) {
    int amount = 0;
    for(auto letter: nickname) {
        auto lowered_letter = std::tolower(letter);
        for(auto specific_letter: specific_letters) {
            if (lowered_letter == specific_letter) {
                amount++;
                break;
            }
        }
    }
    return amount;
}

int main() {
    std::string filename;
    std::cin >> filename;
    std::ifstream filein(filename);
    std::map<std::string, int> animals_to_amounts;
    std::set<std::string> unique_animals;
    auto previous_animals_size = unique_animals.size();
    for(std::string nickname; filein >> nickname;) {
        if (!std::isupper(nickname[0])) continue;
        unique_animals.insert(nickname);
        if (previous_animals_size == unique_animals.size()) continue;
        else previous_animals_size = unique_animals.size();
        auto hissing = amount_of_specific_letters(nickname, {'s', 'h', 'f'});
        auto ringing = amount_of_specific_letters(nickname, {'r', 'z', 'j'});
        auto animal = (hissing > ringing) ? "cat" : (hissing == ringing) ? "fox" : "dog";
        animals_to_amounts[animal]++;
    }
    for(auto& animal_to_amount: animals_to_amounts) {
        auto& amount = animal_to_amount.second;
        std::cout << amount << ' ';
    }
}