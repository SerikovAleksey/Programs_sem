#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


class Person
{
public:
    // Создать человека с ФИО
    Person()= default;
    Person(std::string surname, std::string name, std::string middleName):surname(surname), name(name), middleName(middleName){};


    friend std::istream& operator>>(std::istream & is, Person&);
    friend std::ostream& operator<<(std::ostream & os, Person);

    bool operator<(const Person& another) const{
        if (another.surname == surname){
            if(another.name == name){
                return middleName < another.middleName;
            } else return name <another.name;
        }
        return surname < another.surname ;
    }

    void setSurname(const std::string surname){
        Person::surname = surname;
    }

    void setName(const std::string name) {
        Person::name = name;

    }
    void setMiddleName(const std::string middleName){
        Person::middleName = middleName;
    }

private:
    std::string surname;
    std::string name;
    std::string middleName;
};

std::istream& operator>>(std::istream& is, Person& man) {
    std::string name, surname, middlename;
    is >> surname;
    is >> name;
    is >>middlename;
    man.surname = surname;
    man.name = name;
    man.middleName = middlename;
    return is;
}

std::ostream& operator<<(std::ostream& os, Person man){
    return os << man.surname << " " << man.name << " " << man.middleName;
    }

    using std::cout, std::endl, std::cin;
int main() {
    cout << "Testing I/O" << endl;
    Person p("Ivanov", "Ivan", "Ivanovich");
    cin >> p;
    cout << p << endl;

    cout << "Testing sorting" << endl;
    std::vector<Person> people;
    people.push_back(Person("Ivanov", "Ivan", "Ivanovich"));
    people.push_back(Person("Petrov", "Petr", "Petrovich"));
    people.push_back(Person("Ivanov", "Ivan", "Petrovich"));
    people.push_back(Person("Ivanov", "Petr", "Ivanovich"));

    std::sort(people.begin(), people.end());
    for(auto it = people.begin(); it < people.end(); it++) {
        cout << *it << endl;
    }
}