#include <iostream>
    using std::cout;
    using std::endl;
    using std::boolalpha;

    struct Data {
        int mst, tmp_pole, tmp_eq, ox_mpercent, co2_mpercent;
    };

    bool check(Data d, Data limit_min, Data limit_max);

// Здесь ваша реализация функции
bool check_element(int d, int left_bound, int right_bound){
    return left_bound <= d and right_bound >= d;
}
    bool check(Data d, Data limit_min, Data limit_max){
        return check_element(d.mst, limit_min.mst, limit_max.mst) and
                check_element(d.tmp_pole, limit_min.tmp_pole, limit_max.tmp_pole) and
                check_element(d.tmp_eq, limit_min.tmp_eq, limit_max.tmp_eq) and
                check_element(d.ox_mpercent, limit_min.ox_mpercent, limit_max.ox_mpercent) and
                check_element(d.co2_mpercent, limit_min.co2_mpercent, limit_max.co2_mpercent);
    }
// Это минимально допустимые значения
    const Data MIN = { 3000, 203, 283, 15000,  0};
// Это максимально допустимые значения
    const Data MAX = {10000, 273, 333, 25000, 45};

    int main() {
        // Это пара тестовых значений, первое из которых подходит, а второе нет
        Data test1 = {3000, 203, 283, 15000, 0};
        Data test2 = {10000, 210, 300, 20000, 50};

        cout << boolalpha;
        cout << "Check result for test1: " << check(test1, MIN, MAX) << endl;
        cout << "Check result for test2: " << check(test2, MIN, MAX) << endl;

        return 0;
    }