#include <iostream>

int main() {
    int V, v, L, K, N;
    std:: cin >> V >> v >> L >> K >> N;
    int q = 0;
    V -=N;
    for (;;){
        q = V;
        if (V < 0) {
            V = 0;
            q++;
            N -= 1;
        }
    }
}
