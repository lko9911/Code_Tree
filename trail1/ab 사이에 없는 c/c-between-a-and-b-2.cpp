#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    bool flage=true;
    for(int i=a; i<=b; i++){
        if(i%c==0) flage = false;
    }
    cout << (flage ? "YES" : "NO");
    return 0;
}