#include <iostream>
using namespace std;

int main() {
    int c = 13;
    double w = 0.165;

    cout << fixed;
    cout.precision(6);

    cout << c << " * " << w << " = " << c*w << endl;

    return 0;
}