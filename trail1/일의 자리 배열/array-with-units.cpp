#include <iostream>
using namespace std;

int main() {
    int pp,p;
    cin >> pp >> p;

    cout << pp << " " << p << " ";
    for(int i=3; i<11; i++){
        int temp = pp+p;
        temp %=10;
        pp = p;
        p = temp;
        cout << temp << " ";
    }

    return 0;
}