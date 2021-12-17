#include<iostream>

int main() {
    int begin[3], end[3], res[3];
    for (int i = 0; i < 3; ++i) 
        std::cin >> begin[i];
    for (int i = 0; i < 3; ++i) 
        std::cin >> end[i];
    for (int i = 0; i < 3; ++i) 
        res[i] = end[i] - begin[i];
    for (int i = 1; i < 3; ++i) {
        if (res[0] < 0) {
            res[0] = 12 - (begin[0] - end[0]);
        }
        if (res[i] < 0 && i!=0) {
            res[i - 1] -= 1;
            res[i] = 60 + res[i];
        }
    }
    for (int i = 0; i < 3; ++i) {
        std::cout << res[i] << " ";
    }
    return 0;
}
