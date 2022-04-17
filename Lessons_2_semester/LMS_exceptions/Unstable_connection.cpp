#include <iostream>




class Connector {
public:
    // Конструктор. Получает параметром адрес, куда требуется подключиться.
    // Выполняет необходимую инициализацию соединения.
    // После завершения работы конструктора соединение установлено и готово к работе.
    // Если возникают какие-либо проблемы - выбрасывает exception с описанием проблемы.
    Connector(const std::string& address):site(address) {
    }

    // Отправить по установленному соединению сообщение, текст сообщения передаётся в параметре data.
    // Если возникают какие-либо проблемы - выбрасывает exception с описанием проблемы.
    void sendRequest(const std::string& data) {
        throw connection_refused;
    }

private:
    std::string site;
};

int main () {
    unsigned amount;
    std::cin >> amount;
    for (auto i = 0u; i < amount; i++) {
        std::string site;
        std::cin >> site;
        try {
            Connector a(site);
        a.sendRequest("HELLO");
    } catch (std::exception& ex) {
            std::cout<< site << ": "<< ex.what() << std::endl;
            continue;
        }
        std::cout << site << ": ok" << std::endl;
    }
}