#include <iostream>
using namespace std;

int main() {
    int n,m, cnt;
    cin >> n;

    while(n--){
        cin >> m;
        cnt = 0;
    
    while(1){
                if(m==1){
           cout << cnt << endl; 
           break;
        } 
        if(m%2==0){ 
            m/=2;
            cnt++;
        }
        else {
            m*=3;
            m++;
            cnt++;
        }
    }
    }
    return 0;
}