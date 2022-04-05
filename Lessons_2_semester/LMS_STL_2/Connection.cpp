#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
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
        times[c.getSource()].insert(c.getTimestamp());
        ports[c.getSource()].insert(c.getPort());
    }

    // Проверить, является ли указанный адрес нарушителем
    bool isIntruder(const string& source) {
        if (port > ports[source].size()) {
            return false;
        }
        if (times[source].size() < ports[source].size()) {
            return true;
        }
        int i = 0, j = 1, dur = 0;
        for (auto it = std::begin(times[source]); it != std::end(times[source]); it++) {
//            std::cout << "times = " << *it << " ";
            if (dur < time) {
                if (*it - i < time) {
                    dur += *it - i;
                    j++;
//                    std::cout << "dur = " << dur << std::endl;
                }
            }
            i = *it;

            if (dur < time && j >= port) {
                times[source].clear();
                ports[source].clear();
                return true;
            }
        }
        times[source].clear();
        ports[source].clear();
        return false;
    }

//    void erase_prev_user (const string& sourse) {
//        for (auto item: times[sourse]){
//            times[sourse].erase(item);
//        }
//    }

private:
    std::map<std::string, std::set<int>> ports;
    std::map<std::string, std::set<int>> times;
    unsigned  short time;
    unsigned  short port;
};

using std::cout, std::endl, std::boolalpha;
int main () {
    IntrusionDetector id;
    id.setTimeThreshold(5);
    id.setPortLimit(3);
    id.handleConnection({"evil.com", 21, 100500});
    id.handleConnection({"evil.com", 22, 100512});
    id.handleConnection({"evil.com", 23, 100511});
    id.handleConnection({"evil.com", 24, 100510});
    id.handleConnection({"evil.com", 25, 100600});
    cout << boolalpha << "Checking if evil.com is intruder: " << id.isIntruder("evil.com") << endl;

id.handleConnection({"load.com", 21, 100500});
id.handleConnection({"load.com", 22, 100600});
id.handleConnection({"load.com", 23, 100700});
id.handleConnection({"load.com", 24, 100800});
id.handleConnection({"load.com", 25, 100900});
cout << boolalpha << "Checking if load.com is intruder: " << id.isIntruder("load.com") << endl;
//
id.handleConnection({"load.com", 80, 100500});
id.handleConnection({"load.com", 80, 100501});
id.handleConnection({"load.com", 80, 100502});
id.handleConnection({"load.com", 80, 100503});
id.handleConnection({"load.com", 80, 100504});
cout << boolalpha << "Checking if load.com is intruder: " << id.isIntruder("load.com") << endl;

cout << boolalpha << "Checking if evil.com is intruder: " << id.isIntruder("test.com") << endl;

    id.handleConnection({"evil.com", 21, 100500});
    id.handleConnection({"evil.com", 22, 100501});
    id.handleConnection({"evil.com", 23, 100502});
    id.handleConnection({"evil.com", 24, 100503});
    id.handleConnection({"evil.com", 25, 100504});
    cout << boolalpha << "Checking if evil.com is intruder: " << id.isIntruder("evil.com") << endl;

    id.handleConnection({"evil.com", 21, 100500});
    id.handleConnection({"evil.com", 22, 100600});
    id.handleConnection({"evil.com", 23, 100600});
    id.handleConnection({"evil.com", 24, 100600});
    id.handleConnection({"evil.com", 25, 100700});
    cout << boolalpha << "Checking if evil.com is intruder: " << id.isIntruder("evil.com") << endl;

}
