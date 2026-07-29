#include <iostream>
using namespace std;

int main() {
    int cnt=0,n,i=10;
    int cnt2=0;
    
    while(i--){
        cin >> n;
        if(n %3==0)
        cnt++;
        if(n%5 ==0)
        cnt2++;
    }
    cout << cnt << " " <<cnt2;
    return 0;
}