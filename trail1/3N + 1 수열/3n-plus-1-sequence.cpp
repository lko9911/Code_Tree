#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt=0;
    while(1){
                if(n==1){ 
        cout << cnt;
        break;
        }
        
        if(n%2==0) n/=2;
        else n = n*3 +1;
        cnt++;
    }
    return 0;
}