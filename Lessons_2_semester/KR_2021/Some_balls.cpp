#include <iostream>
#include <exception>
#include <vector>

class AllBalls {
public:
    void Des(int a) {
        D_check += a;
        std::cout << D_check;
        if (D_check > 1) throw std::exception();
    }
private:
    int D_check = 0;
};

class Ball: public  AllBalls{
public:
    friend void DestroyBall(Ball);
    // Конструктор и деструктор шара, если нужны

    // Попытка сломать шар.
    // Для первого целого шара должна заканчиваться успешно.
    // Если один шар уже был сломан, выбросить std::exception
    // Если пытаемся ломать уже сломанный или потерянный шар, выбросить std::exception
    void destroy() {
        a.Des(1);
    }

    // Попытка потерять шар.
    // Для первого целого шара должна заканчиваться успешно.
    // Если один шар уже был потерян, то выбросить std::exception
    // Если пытаемся терять уже сломанный или потерянный шар, выбросить std::exception
    void lose();
private:
AllBalls a;
};


int main (){
    Ball first;
    first.destroy();

    Ball second;
    second.destroy();
}