#include <iostream>
using namespace std;

void Modifty(int &a, int &b){
    if(a>b){
        b +=10; a *=2;
    }
    else {
        a +=10; b *=2;
    }
}

int main() {
    int a,b;
    cin >> a >> b;

    Modifty(a,b);
    cout << a << " " << b;

    return 0;
}