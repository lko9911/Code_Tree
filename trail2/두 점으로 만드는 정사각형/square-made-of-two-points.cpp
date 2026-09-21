#include <iostream>

using namespace std;

int x1, y1, x2, y2;
int a1, b1, a2, b2;

int main() {
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;

    int x_1 = min(x1,a1);
    int y_1 = min(y1,b1);
    int x_2 = max(x2,a2);
    int y_2 = max(y2,b2);

    int c = max(abs(x_1 - x_2), abs(y_1 - y_2));

    cout << c*c;

    return 0;
}