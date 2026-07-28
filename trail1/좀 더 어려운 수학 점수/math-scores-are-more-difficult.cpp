#include <iostream>
using namespace std;

int main() {
    int a1,a2,b1,b2;
    cin >> a1 >> b1 >> a2 >> b2;

    if(a1 > a2) cout << "A";
    else if(a1 == a2) {
        if(b1 > b2) cout << "A";
        else cout << "B";
    }
    else cout << "B";
    return 0;
}