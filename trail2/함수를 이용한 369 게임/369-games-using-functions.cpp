#include <iostream>
using namespace std;

bool check(int n){
    bool flage=false;
    int a,b;
    a = n;
    while(a!=0){
        b=a%10;
        a/=10;
        if(b == 3 || b==6 || b==9) flage = true; 
    }

    return n%3==0 || flage;
}

int main() {
    int a,b;
    cin >> a >> b;
    int cnt=0;
    for(int i=a; i<=b; i++){
        if(check(i)){
         cnt++;
        }
    }

    cout << cnt;

    return 0;
}