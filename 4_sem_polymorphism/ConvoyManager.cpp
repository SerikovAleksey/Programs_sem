

class Car
{
protected:
    bool allowesBoarding;
    bool allowesLoading;
    unsigned int numberOfSeats;
    unsigned int numberOfContainers;

public:
    Car(bool allowesBoarding, bool allowesLoading, unsigned int numberOfSeats, unsigned int numberOfContainers) {
        this->allowesBoarding = allowesBoarding;
        this->allowesLoading = allowesLoading;
        this->numberOfSeats = numberOfSeats;
        this->numberOfContainers = numberOfContainers;
    }
    ~Car() {}

    bool isBoardingAllowed() const {
        return allowesBoarding;
    }

    bool isLoadingAllowed() const {
        return allowesLoading;
    }

    unsigned int getNumberOfSeats() const {
        return numberOfSeats;
    }

    unsigned int getNumberOfContainers() const {
        return numberOfContainers;
    }
};


#include <vector>
class ConvoyManager
{
public:
    // Зарегистрировать новую машину в колонне
    void registerCar(const Car& c) {
        if (c.isBoardingAllowed()) value_seats += c.getNumberOfSeats();
        if (c.isLoadingAllowed()) value_conteiners += c.getNumberOfContainers();
    }

    // Сообщить, сколько всего пассажиров может принять колонна
    unsigned int getTotalSeats() const {
        return value_seats;
    }

    // Сообщить, сколько всего грузовых контейнеров может взять колонна
    unsigned int getTotalContainers() const {
        return value_conteiners;
    }

private:
    int value_seats = 0;
    int value_conteiners = 0;
};

#include <iostream>
using namespace std;
int main () {
    ConvoyManager cm;

    Car c1(true, false, 12, 3);
    cm.registerCar(c1);
    Car c2(false, true, 12, 3);
    cm.registerCar(c2);
    Car c3(true, true, 12, 3);
    cm.registerCar(c3);
    Car c4(false, false, 12, 3);
    cm.registerCar(c4);

    cout << "Total available seats: " << cm.getTotalSeats() << endl;
    cout << "Total available containers: " << cm.getTotalContainers() << endl;
}