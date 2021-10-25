#include <iostream>
using namespace std;

int min_value(int x, int y) {
    if (x<y) {
        return x;
    }
    else {
        return y;
    }
}

int max_value(int x, int y) {
    if (x<y) {
        return y;
    }
    else {
        return x;
    }
}

int main() {
    int team1, team2, minimum, maximum;
    cin >> team1 >> team2;
    minimum = min_value(team1, team2);
    maximum = max_value(team1, team2);
    if (maximum-minimum < 3) {
        cout << "Yes";
    }
    else {
        cout << "N0";
    }
    return 0;
}