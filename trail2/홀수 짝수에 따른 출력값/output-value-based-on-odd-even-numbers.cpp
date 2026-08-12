#include <iostream>
using namespace std;

int odd(int n){
    if(n==1) return 1;
    
    return odd(n-2) + n;
}

int even(int n){
    if(n==2) return 2;

    return even(n-2) + n;
}

int main() {
    int n;
    cin >> n;
    if(n%2==0) cout << even(n);
    else cout << odd(n);
    return 0;
}