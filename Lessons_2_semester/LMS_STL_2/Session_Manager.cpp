#include <string>
#include <iostream>
#include <set>

class SessionManager
{
public:
    // Вход пользователя.
    // Один пользователь может войти несколько раз подряд, 
    // считать его при этом нужно один раз.
    void login(const std::string& username) {
        names.insert(username);
    }

    // Выход пользователя.
    // Пользователь может выйти несколько раз подряд, 
    // падать при этом не нужно.
    void logout(const std::string& username){
        if (names.find(username) != std::end(names))names.erase(username);
    }

    // Сколько сейчас пользователей залогинено.
    int getNumberOfActiveUsers() const{
        return names.size();
    }

private:
    std::set<std::string> names;
};

using std::cout, std::endl;
int main() {
    SessionManager m;
    m.login("alice");
    cout << m.getNumberOfActiveUsers() << endl;
    m.login("bob");
    cout << m.getNumberOfActiveUsers() << endl;
    m.login("alice");
    cout << m.getNumberOfActiveUsers() << endl;
    m.logout("whoever");
    cout << m.getNumberOfActiveUsers() << endl;
    m.logout("alice");
    cout << m.getNumberOfActiveUsers() << endl;
    m.logout("bob");
    cout << m.getNumberOfActiveUsers() << endl;
}