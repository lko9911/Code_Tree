#include <iostream>

using namespace std;

int N;

int F(int n){
    if(n==0) return 1;

    return n*F(n-1);
}

int main() {
    cin >> N;

    cout << F(N);

    return 0;
}