#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int ab = a*60 + b;
    int cd = c*60 + d;

    cout << cd-ab;

    return 0;
}