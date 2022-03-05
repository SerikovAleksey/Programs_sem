#include <string>
#include <iostream>

class Student
{
public:
    // Задать имя студента
    void setName(std::string name) {
        this->name = name;
    }

    // Указать количество баллов за контрольную
    void setScore(unsigned int score) {
        this->score = score;
    }

    // Получить имя студента
    std::string getName() const {
        return name;
    }

    // Получить количество баллов студента
    unsigned int getScore() const {
        return score;
    }

    friend std::istream& operator>>(std::istream&, Student&);
    friend std::ostream& operator<<(std::ostream&, Student);

private:
    int score;
    std::string name;
};

std::istream& operator>>(std::istream& is , Student& student) {
    std::string name;
    std::getline(is, name);
    student.setName(name);
    return is;
}

std::ostream& operator <<(std::ostream& os, Student s) {
   return os << "'"<< s.getName() << "'" << ": " << s.getScore();
}

int main () {
    Student s;
    std::cin >> s;
    s.setScore(10);
    std::cout << s << std::endl;
}