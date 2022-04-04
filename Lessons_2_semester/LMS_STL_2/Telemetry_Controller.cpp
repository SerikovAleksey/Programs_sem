#include <iostream>
#include <map>
#include <set>

using std::string;

class TelemetryController
{
public:
    // Получить и обработать событие. Параметрами передаются:
    // - device - идентификатор устройства, с которого пришло значение;
    // - value - собственно значение некоторой величины, переданное устройством.
    void handleEvent(const string& device, long value) {
        gadgets[device].insert(value);
    }

    // По идентификатору устройства возвращает,
    // сколько всего значений от него пришло за всё время
    unsigned int getEventsCount(const string& device) const {
        return gadgets.at(device).size();
    }

    // По идентификатору устройства возвращает
    // минимальное значение за всё время, пришедшее от данного устройства
    long getMinValue(const string& device) const {
        return *(gadgets.at(device).begin());
    }

    // По идентификатору устройства возвращает
    // максимальное значение за всё время, пришедшее от данного устройства
    long getMaxValue(const string& device) const {
        return *(std::prev(std::end(gadgets.at(device)), 1));
    }

private:
    std::map<std::string, std::multiset<int>> gadgets;
};

using std::cout, std::endl;
int main () {
    TelemetryController tc;

    tc.handleEvent("d1", 42);
    tc.handleEvent("d1", -42);
    tc.handleEvent("d2", 100);


    cout << "Events count for d1: " << tc.getEventsCount("d1") << endl;
    cout << "Min value for d1: " << tc.getMinValue("d1") << endl;
    cout << "Max value for d1: " << tc.getMaxValue("d1") << endl;
}