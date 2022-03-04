#include <iostream>

struct StrangeMatrix {
    int first_line[3];
    int second_line[3];
    int third_line[3];
};

StrangeMatrix transpose(StrangeMatrix m) {
    StrangeMatrix matrix;
    for (auto i = 0u; i < 3; i++) {
        for (auto j = 0u; j < 3; j++){
            if (j == 0) {
                matrix.first_line[j] = m.first_line[j];
                matrix.second_line[j] = m.first_line[j + 1];
                matrix.third_line[j] = m.first_line[j + 2];
            } else if ( j == 1){
                matrix.first_line[j] = m.second_line[j - 1];
                matrix.second_line[j] = m.second_line[j];
                matrix.third_line[j] = m.second_line[j + 1];
            } else {
                matrix.first_line[j] = m.third_line[j - 2];
                matrix.second_line[j] = m.third_line[j - 1];
                matrix.third_line[j] = m.third_line[j];
            }
        }
    }

    return matrix;
}