#include <iostream>
#include <vector>
#include <iomanip>

int main() {
   int N;
   double sum = 0, mid = 0;
   std::cin >> N;
   std::vector<double> numbers(N);
   for (auto i = 0u; i < N; i++) {
       double num;
       std::cin >> num;
       numbers[i] += num;
       sum += num;
   }
   mid += sum / N;
    for (auto i = 0u; i < N; i++) {
        std::cout << std::fixed << std::setprecision(4) << numbers[i] - mid<< " ";
    }
}
