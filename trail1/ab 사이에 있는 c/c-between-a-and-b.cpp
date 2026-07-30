#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    bool s = false;
    cin >> a >> b >> c;
    for(int i = a; i<=b; i++){
        if(i%c==0) s = true;
    }

    cout << (s ? "YES" :  "NO");
    return 0;
}