#include <iostream>

using namespace std;

int N;
int memo[46];

int Fibbo(int n){
    if(memo[n] != 0) return memo[n];
    if(n <=2) return memo[n]=1;
    else memo[n] =  Fibbo(n-1) + Fibbo(n-2);

    return memo[n];
}

int main() {
    cin >> N;

    cout << Fibbo(N);

    return 0;
}
