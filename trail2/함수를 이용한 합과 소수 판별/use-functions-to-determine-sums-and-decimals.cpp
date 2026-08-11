#include <iostream>
using namespace std;

bool check(int n){
    for(int i=2; i<n; i++){
        if(n%i==0) return false;
    }
    return true;
}

bool Sum(int n){
    int sum=0;
    while(n!=0){
        sum = sum + n%10;
        n /= 10;
    }
    if(sum%2==0) return true;
    else return false;
}

int main() {
    int a,b,cnt=0;
    
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        if(check(i) && Sum(i)) {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}