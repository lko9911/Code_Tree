#include <iostream>
using namespace std;

int cnt=0;

int Result(int n){
    if(n==0) return 0;

    cnt++;
    if(n%2==0) return Result(n/2);
    else return Result(n/3);
}

int main() {
    int n;
    cin >> n;

    Result(n);
    cnt--;
    cout << cnt;

    return 0;
}