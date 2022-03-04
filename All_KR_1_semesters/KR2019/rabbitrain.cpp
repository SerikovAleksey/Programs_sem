#include <iostream>
#include <vector>

struct Coach {
    int people = 0u, rabbits = 0u;
};

void input_coach(Coach& coach) {
    std::cin >> coach.people >> coach.rabbits;
}

int main() {
    int N, capacity;
    std::cin >> N;
    std::vector<Coach> coaches(N);
    for(auto& coach : coaches) {
        input_coach(coach);
    }
    std::cin >> capacity;
    int rabbits_move = 0u;
    for(auto i = 0u; i < N / 2; i++) {
        rabbits_move += coaches[i].rabbits;
        coaches[i].rabbits = 0u;
    }
    for(auto i = N / 2; i < N; i++) {
        auto vacant_places = capacity - coaches[i].rabbits - coaches[i].people;
        if (vacant_places < 0) {
            coaches[i].rabbits += vacant_places;
            rabbits_move -= vacant_places;
            vacant_places = 0;
        }
        if (rabbits_move <= vacant_places) {
            coaches[i].rabbits += rabbits_move;
            rabbits_move = 0u;
            break;
        } else {
            coaches[i].rabbits += vacant_places;
            rabbits_move -= vacant_places;
        }

    }
    coaches[N - 1].rabbits += rabbits_move;
    for(auto coach : coaches) {
        std::cout << coach.people << ' ' << coach.rabbits << std::endl;
    }
}
