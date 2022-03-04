#include <iostream>
#include <set>

struct Point{
    int x = 0, y = 0, brightness = 0;
    unsigned  amount = 1;

    bool operator==(Point another){
        return  brightness == another.brightness and x == another.x and y == another.y;
    }
};
Point read_point() {
    Point p;
    std::cin >> p.x >> p.y >> p.brightness;
    return p;
}

bool operator<(Point lhs, Point rhs) {
    if (lhs.brightness != rhs.brightness) {
        return lhs.brightness > rhs.brightness;
    }
    if (lhs.amount != rhs.amount) {
        return lhs.amount > rhs.amount;
    }
    return lhs.x * lhs.x + lhs.y * lhs.y <
           rhs.x * rhs.x + rhs.y * rhs.y;
}

bool not_valid(Point p) {
    return p.brightness < 10 and p.x * p.x + p.y * p.y > 10000;
}

int main() {
    std::size_t N;
    std::cin >> N;
    std::set<Point> points;
    for(auto i = 0u; i < N; i++) {
        auto point = read_point();
        if (not_valid(point)) continue;
        for(auto point_in_set: points) {
            if (point == point_in_set) {
                point.amount = point_in_set.amount + 1;
                points.erase(point_in_set);
                break;
            }
        }
        points.insert(point);
    }
    for(auto point : points) {
        std::cout << point.x << ' ' << point.y << ' ' << point.brightness << std::endl;
    }
}