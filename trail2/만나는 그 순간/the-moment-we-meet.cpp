#include <iostream>
#include <algorithm>
using namespace std;

#define OFFSET 1000000

int a[2000000];
int b[2000000];

int main() {
    int n,m,c,idx=0, pos = OFFSET;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        int loc;
        char d;

        cin >> d >> loc;
        
        if(d=='R')
            while(loc--){
                pos++;
                idx++;
                a[idx] = pos;
            }
        else if(d=='L')
            while(loc--){
                pos--;
                idx++;
                a[idx] = pos;
                }
    }   
    int timeA = idx;

    idx = 0;
    pos = OFFSET;

    for(int i=0; i<m; i++){
        int loc;
        char d;

        cin >> d >> loc;
        
        if(d=='R')
            while(loc--){
                pos++;
                idx++;
                b[idx] = pos;
            }
        else if(d=='L')
            while(loc--){
                pos--;
                idx++;
                b[idx] = pos;
                }
    }
    int timeB = idx;

    int lasttime = max(timeA,timeB);

    for(int i=1; i<=lasttime; i++){
        if(a[i] == b[i]) {
            cout << i;
            break;
        }
        if(i == lasttime){
        cout << -1;
        break;
        }
    }

    return 0;
}