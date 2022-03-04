#include "iostream"
using std::cout, std::endl;

namespace namespaceA {
    class Engine {
    public:
        void run() {
            cout << "EngineA run" << endl;
        }
    };
}

namespace namespaceB {
    class Engine {
    public:
         void run() {
            cout << "EngineB run" << endl;
        }
    };
}

namespace namespaceC {
    class Engine {
    public:
        void run() {
            cout << "EngineC run" << endl;
        }
    };
}


class MyEngine:public namespaceC::Engine, namespaceA::Engine, namespaceB::Engine{
public:
    // Если передан параметр 1 - должен быть вызван метод run и Engine-а из библиотеки A.
    // Если передан параметр 2 - должен быть вызван метод run и Engine-а из библиотеки B.
    // Если передан параметр 3 - должен быть вызван метод run и Engine-а из библиотеки C.
    // Если передано что-то иное - должно ничего не произойти.
    void run(unsigned int number) {
        if (number == 1) {
            namespaceA::Engine::run();
        }
        if (number == 2) {
            namespaceB::Engine::run();
        }
        if (number == 3) {
            namespaceC::Engine::run();
        }
        return ;
    }

};

