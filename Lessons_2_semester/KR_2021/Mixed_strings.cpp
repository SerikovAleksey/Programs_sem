#include <iostream>
#include <string>
#include <map>
#include <set>

void RemakeString (std::string& word, std::map<std::string, int>& str) {
    int chek = 1;
    for (auto i = 0u; i < word.size(); i++){
        if (word[i] < 91){
        word[i] += 32;
        chek++;
        }
    }
    if (chek != 1) {
        str[word]++;
    }
}


int main () {
    int n;
    std::map<std::string, int> strings;
    std::cin >> n;
    for (auto i = 0; i < n; i++) {
        std::string word;
        std::cin >> word;
        RemakeString(word, strings);
    }

    std::map<int, std::set<std::string>> str;
    for (auto it = strings.begin(); it != strings.end(); it++) {
        str[it->second + 1].insert(it->first);
    }

    for (auto it = str.rbegin(); it != str.rend(); it++) {
            if(it->first > 2) {
                for (const auto& elem:it->second) {
                    std::cout << elem << std::endl;
                }
            }
    }
}