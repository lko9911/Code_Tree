#include <iostream>
using namespace std;

int main() {
    int a,b;
    int m,n;
    cin >> a >> b;

    m = a/b;
    n = a%b;
    cout << m << ".";

    for(int i = 1; i <= 20 ; i++){
        n *= 10;
        m = n/b;
        n %= b;
        cout << m;
    }
    
    return 0;
}