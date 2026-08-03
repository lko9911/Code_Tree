#include <iostream>
using namespace std;

int main() {
    int pp,p;
    cin >> pp >> p;

    cout << pp << " " << p << " ";
    for(int i=2; i<10; i++){
        int temp = p + 2*pp;
        pp = p;
        p = temp;
        cout << temp << " ";
    }
    return 0;
}