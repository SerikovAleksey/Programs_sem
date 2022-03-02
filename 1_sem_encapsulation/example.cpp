#include <iostream>

class Date {
public:
    Date(int day, int month, int year) {
        setDay(day);
        setMonth(month);
        setYear(year);
    }

    [[nodiscard]] int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    void setDay(int day) {
        if (day <= 31 && day >= 1) Date::day = day;
    }

    void setMonth(int month) {
        if (month <= 12 && month >= 1) Date::month = month;
    }

    void setYear(int year) {
        Date::year = year;
    }

private:
    int day, month, year;
};

std::ostream& operator<<(std::ostream& out, Date date) {
    out << date.getDay() << '.' << date.getMonth() << '.' << date.getYear();
    return out;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    Date date(04, 02, 2022);
    std::cout << date;
    // а внутри области видимости if-а
//    if (true) int a = 5;
//    std::cout << a;
    return 0;
}