#include <iostream>
using namespace std;

int main() {
    int a,b;
    int count[10]={};
    cin >> a >> b;

    while(a>1){
    count[a%b]++;
    a/=b;
    }

    int sum=0;

    for(int i=0; i<=9; i++){
        sum  = sum + count[i]*count[i];
    }
    cout << sum;

    return 0;
}