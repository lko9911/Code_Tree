#include <iostream>
using namespace std;

int main() {
    char a,b;
    cin >> a >> b;

    int r = a+b;
    int r2 = (a > b ? a-b: b-a);
    cout << r << " " << r2;
    return 0;
}