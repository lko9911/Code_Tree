#include <iostream>

using namespace std;

int N;

int result(int n){
    if(n==0) return 0;
    return result(n/10) + (n%10)*(n%10);
}

int main() {
    cin >> N;

    cout << result(N);

    return 0;
}