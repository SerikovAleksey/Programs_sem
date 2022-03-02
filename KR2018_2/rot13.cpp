#include <string>
#include <iostream>
#include <fstream>

std::string trans(std::string w) {
    for (char & i : w) {
        i += '13';
    }
    return w;
}

int main () {
    std::string filename;
    std::cin >> filename;
    std::fstream filein(filename);
    for (std::string words; filein >> words;) {
       auto new_word = trans(words);
       std::cout << new_word;
    }
}