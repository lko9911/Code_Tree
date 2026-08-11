#include <iostream>
using namespace std;

void Modifty(int &a){
    if(a<0)
        a = -a;
}

int main() {
    int n;
    cin >> n;
    while(n--){
    int b;
    cin >> b;
    
    Modifty(b);
    cout << b << " ";
    }

    return 0;
}