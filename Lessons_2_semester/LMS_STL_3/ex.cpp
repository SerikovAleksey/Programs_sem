#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>a;
    vector<int>b;

//    a.resize(n);

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        a.push_back(num);
    }
//    b.resize(n);
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        b.push_back(num);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int k = 0;
    for(int i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            k++;
        }
    }
        if(k == n){
            cout<< boolalpha <<  true;
        } else cout<< boolalpha << false;
        return 0;
    }
 