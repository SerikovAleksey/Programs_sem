#include <iostream>
#include <vector>


int main() {
    int amount_valets, amount_money, amount_goblins;
    int sum_money = 0, amount_sad_goblins = 0;

    std::cin >> amount_valets;
    std::vector<int> money_in_valet(amount_valets);
    for (int i = 0; i < amount_valets; i++) {
        std::cin >> amount_money;
        money_in_valet[i] = amount_money;
    }

    std::cin >> amount_goblins;
    std::vector<int> goblins(amount_goblins);

    int j = 1;

    for (int i = 0; i < amount_valets ; i++) {
        sum_money += money_in_valet[i];
        for (auto k = 0u; k < money_in_valet[i];k++) {
            if (j >= 2 * goblins.size()){
                j -= 2 * goblins.size();
            }
            if (j >= goblins.size()) {
                j -= goblins.size();
                for (auto c = 0u; c < goblins.size(); c++) {
                    if (goblins[c] == 0) {
                        sum_money--;
                        break;
                    }
                }
                goblins[j]++;
                std::cout << j << " he have:" << goblins[j] << " " << k <<" "<< i << std::endl;
                if (k == money_in_valet[i] - 1){
                    j += i + 3;
                }else {
                    j += i + 2;
                }
            }
            else {
                for (auto c = 0u; c < goblins.size(); c++) {
                    if (goblins[c] == 0) {
                        sum_money--;
                        break;
                    }
                }
                goblins[j]++;
                std::cout << j << " he have:" << goblins[j] << " " << k <<" "<< i << std::endl;
                if (k == money_in_valet[i] - 1){
                    j += i + 3;
                }else {
                    j += i + 2;
                }
            }
        }
    }

        for (int goblin = 0; goblin < goblins.size(); goblin++) {
            if (goblins[goblin] == 0) {
                amount_sad_goblins++;
            }
        }
        if (amount_sad_goblins != 0) {
            std::cout << "NO" << " " << amount_sad_goblins;
        } else {
            std::cout << "YES" << " " << sum_money;
        }

    }

