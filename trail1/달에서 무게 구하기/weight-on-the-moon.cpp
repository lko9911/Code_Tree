#include <iostream>
using namespace std;

int main() {
    int w=13;
    double ratio=0.165;
    cout << fixed;
    cout.precision(6);
    cout << w << " * " << ratio << " = " << w*ratio;
    return 0;
}