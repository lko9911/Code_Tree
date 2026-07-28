#include <iostream>
using namespace std;

int main() {
    int a1,b1,a2,b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if(b1 > b2 && a1 > a2) cout << 1;
    else cout << 0;
    return 0;
}