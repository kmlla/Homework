#include <iostream>
using namespace std;
int main() {
    int n; // номер комнаты
    int rooms_in_floor = 1; // кол-во комнат на этаже
    int t = 0;
    int rooms = 0; // общее количество комнат
    int floor = 0; // этаж, на котором будет находиться комната #n
    cin >> n;
    while (n > 0) {
        if (rooms_in_floor == t) {
            t = 0;
            rooms_in_floor++;
        }
        else if (n - rooms_in_floor > 0) {
            rooms += rooms_in_floor;
            t++;
            floor++;
            n -= rooms_in_floor;
        }
        else break;
    }
    cout << floor + 1 << " " << n;
    return 0;
}
