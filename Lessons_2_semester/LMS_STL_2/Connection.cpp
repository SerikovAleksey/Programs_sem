#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

using std::string;

class Connection
{
protected:
    string source;
    unsigned short int port;
    unsigned long long timestamp;

public:
    Connection(string source, unsigned short int port, unsigned long long timestamp) {
        this->source = source;
        this->port = port;
        this->timestamp = timestamp;
    }
    ~Connection() {}

    string getSource() const {
        return source;
    }

    unsigned short int getPort() const {
        return port;
    }

    unsigned long long getTimestamp() const {
        return timestamp;
    }
};

class IntrusionDetector
{
public:
    // Задать временное окно для анализа (см. описание логики выше)
    void setTimeThreshold(unsigned short int timeThreshold) {
        time = timeThreshold;
    }

    // Задать минимальное количество портов для срабатывания (см. описание логики выше)
    void setPortLimit(unsigned short int portLimit) {
        port = portLimit;
    }

    // Вызов этого метода уведомляет анализатор о новом подключении.
    void handleConnection(const Connection& c) {
        times.second.push_back(c.getTimestamp());
        ports.second.insert(c.getPort());
    }

    // Проверить, является ли указанный адрес нарушителем
    bool isIntruder(const string& source) {
        int i = 0, j = 1;
        for (auto it = std::begin(times.second); it != std::end(times.second); it++) {
            if (*it != *(std::prev(std::end(times.second), 1)) && *it - *(std::next(it, 1)) < time) {
                i += *it - *(std::next(it, 1));
                j++;
                std::cout << "it = " << *it << " " << *(std::next(it, 1))<< std::endl;
            }
        }
        std::cout << "i= " << i << " " << "j= " << j << std::endl;
        if (i > time && j <= port)return true;
        return false;
    }

private:
    std::pair<std::string, std::set<unsigned long long>> ports;
    std::pair<std::string, std::vector<unsigned long long>> times;
    unsigned  short time;
    unsigned  short port;
};

using std::cout, std::endl, std::boolalpha;
int main () {
    IntrusionDetector id;
    id.setTimeThreshold(5);
    id.setPortLimit(3);

    id.handleConnection({"evil.com", 21, 100500});
    id.handleConnection({"evil.com", 22, 100600});
    id.handleConnection({"evil.com", 23, 100600});
    id.handleConnection({"evil.com", 24, 100600});
    id.handleConnection({"evil.com", 25, 100700});
    cout << boolalpha << "Checking if evil.com is intruder: " << id.isIntruder("evil.com") << endl;

//    id.handleConnection({"load.com", 21, 100500});
//    id.handleConnection({"load.com", 22, 100600});
//    id.handleConnection({"load.com", 23, 100700});
//    id.handleConnection({"load.com", 24, 100800});
//    id.handleConnection({"load.com", 25, 100900});
//    cout << boolalpha << "Checking if load.com is intruder: " << id.isIntruder("load.com") << endl;
}