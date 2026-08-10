#include <iostream>
using namespace std;

void check(int n, int m){
    int gcd, result = n*m;
    
    while(m!=0){
        int temp = n%m;
        n = m;
        m = temp;
    }
    gcd = n;

cout << result/n;
}

int main() {
    int n,m;
    cin >> n >> m;
    check(n,m);
    return 0;
}