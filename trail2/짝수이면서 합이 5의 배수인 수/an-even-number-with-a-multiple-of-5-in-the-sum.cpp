#include <iostream>
using namespace std;

bool check(int n){
    int sum=0;
    sum += n/10;
    sum += n%10;
    return (n%2==0 && sum%5==0);
}

int main() {
    int n;
    cin >>n;
    if(check(n)) cout << "Yes";
    else cout << "No";
    return 0;
}