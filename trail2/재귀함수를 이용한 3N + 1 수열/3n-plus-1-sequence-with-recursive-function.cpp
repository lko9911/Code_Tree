#include <iostream>
using namespace std;

int check(int n){
    if(n==1) return 0;

    if(n%2==0) return check(n/2) + 1;
    else return check(n*3+1) + 1;
}

int main() {
    int n;
    cin >> n;

    cout << check(n);
    return 0;
}