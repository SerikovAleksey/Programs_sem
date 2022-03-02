#include <iostream>
#include <vector>

std::vector<int> revers(std::vector<std::vector<int>> x,int i,int j,int m,int n){
std::vector<int> binary_code(m+n-2);
while(true) {
if (i == 0 && j == 0) {
return binary_code;
}
if (i == 0) {
binary_code.insert(binary_code.begin(), 1);
j--;
continue;
}
if (j == 0) {
binary_code.insert(binary_code.begin(), 0);
i--;
continue;
}
if (x[i - 1][j] < x[i][j - 1]) {
binary_code.insert(binary_code.begin(), 0);
i--;
continue;
} else {
binary_code.insert(binary_code.begin(), 1);
j--;
continue;
}
}
}

int main(){
    std::vector<std::vector<int>> desk;
    int n,m;
    std::cin >> n >> m;
    desk.resize(m);
    for(auto i = 0u;i<m;i++){
        desk[i].resize(n);
        for(auto j = 0u;j<n;j++){
            std::cin >> desk[i][j];
        }
    }
    for(auto i =1u;i<n;i++){
        desk[0][i] += desk[0][i-1];
    }
    for(auto i = 1u;i<m;i++){
        desk[i][0] += desk[i-1][0];
    }
    int min;
    for(auto i = 1u;i<m;i++){
        for(auto j = 1u;j<n;j++){
            (desk[i-1][j] > desk[i][j-1]) ? min = desk[i][j-1] : min = desk[i-1][j];
            desk[i][j] += min;
        }
    }
    for(auto k = 0u;k<m+n-2;k++){
        if(revers(desk,m-1,n-1,m,n)[k]==0){
            std::cout << "down" << ' ';
        }
        if(revers(desk,m-1,n-1,m,n)[k]==1){
            std::cout << "right" << ' ';
        }
    }
    return 0;
}
