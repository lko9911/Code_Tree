#include <iostream>
using namespace std;

int main() {
    int a,b, cnt2=0;
    cin >> a >> b;

    for(int i=a; i<=b; i++){
        int cnt=0;
        for(int j=1; j<=i; j++) 
            if(i%j==0) cnt++;
        if(cnt==3){
         cnt2++;
        }
        
    }

    cout << cnt2;
    return 0;
}