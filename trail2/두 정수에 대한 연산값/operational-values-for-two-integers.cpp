#include <iostream>
using namespace std;

void Modifty(int &a, int &b){
    if(a>b){
        a +=25; b *=2;
    }
    else {
        b +=25; a *=2;
    }
}

int main() {
    int a,b;
    cin >> a >> b;
    
    Modifty(a,b);

    cout << a << " " << b;
    return 0;
}