#include <iostream>

int main(){
    int n, m;
    std::cin >> n >> m;
    for(int l = 0; l < n; l++){
        for(int k = 0; k<m; k++)
            if(l == 0 or l == n-1 or k == 0 or k == m-1)
                std::cout << "+";
            else
                std::cout << " ";
        std::cout << std::endl;
    }
    return 0;
}