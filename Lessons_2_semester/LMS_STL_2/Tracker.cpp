#include <iostream>
#include <string>
#include <map>
#include <set>

using std::string;
class Tracker
{
public:
    // При любом действии пользователя вызывается этот метод.
    // Методу передаётся:
    // - какой пользователь совершил действие (username);
    // - когда (timestamp - для простоты условные секунды от начала времён).
    // Внимание: не гарантируется, что timestamp расположены строго по
    // возрастанию, в них может быть любой бардак.
    void click(const string& username, unsigned long long timestamp) {
        users[username].insert(timestamp);
    }

    // По имени пользователя нужно вернуть, сколько всего было кликов
    unsigned long long getClickCount(const string& username) const{
        return users.at(username).size();
    }

    // Когда был первый клик
    unsigned long long getFirstClick(const string& username) const {
        return *(users.at(username).begin());
    }

    // Когда был последний клик
    unsigned long long getLastClick(const string& username) const {
        return *(std::prev(std::end(users.at(username)), 1));
    }

private:
    std::map<std::string, std::set<unsigned long long>> users;
};

using std::string;
using std::cout, std::endl;
int main () {
    Tracker t;
    t.click("alice", 1000);
    t.click("bob", 1100);
    t.click("alice", 1001);
    t.click("alice", 1200);
    t.click("alice", 1002);
    cout << t.getClickCount("alice") << endl;
    cout << t.getClickCount("bob") << endl;
    cout << t.getFirstClick("alice") << endl;
    cout << t.getFirstClick("bob") << endl;
    cout << t.getLastClick("alice") << endl;
    cout << t.getLastClick("bob") << endl;
}