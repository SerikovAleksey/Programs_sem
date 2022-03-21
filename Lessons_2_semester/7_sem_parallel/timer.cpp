#include <iostream>
#include <chrono>
#include <cmath>

template <typename Duration>
class Timer {
public:
    Timer(): begin(std::chrono::steady_clock::now()) {}
    ~Timer() {
//        Вычел время "простоя"
        std::cout << "Time is " <<std::chrono::duration_cast<Duration>
                (std::chrono::steady_clock::now() - begin).count() -
                  std::chrono::duration_cast<Duration>
                          (continue_point - pause_point).count()
                          << std::endl;
    }
    auto pause(){
        pause_point = std::chrono::steady_clock::now();
    }
    auto continue_time(){
        continue_point = std::chrono::steady_clock::now();
    }
private:
    std::chrono::steady_clock::time_point begin;
//    Добавил две переменные
    std::chrono::steady_clock::time_point pause_point;
    std::chrono::steady_clock::time_point continue_point;
};

int main() {
    auto sum = 0.;
    {
        Timer<std::chrono::milliseconds> t;
        for (auto i = 0; i < 10000; i++) {
            sum += std::sin(i) + std::cos(i);
        }
        t.pause();
        for(auto i = 0; i < 100000; i++) {
            sum += std::sin(i) + std::cos(i);
        }
        t.continue_time();
        for(auto i = 0; i < 100000; i++) {
            sum += std::sin(i) + std::cos(i);
        }
    }
    std::cout << "Sum is " << sum << std::endl;
    return 0;
}