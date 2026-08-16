#include <iostream>
using namespace std;

#define Max 1000000

int a[Max];
int b[Max];

int main() {
    int n,m, timeA=0, timeB=0, pos_a=0, pos_b=0;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        int v,t;
        cin >> v >> t;
        
        for(int i=0; i<t; i++){
            timeA++;
            pos_a += v;
            a[timeA] = pos_a;
        }
    }

    for(int i=0; i<m; i++){
        int v,t;
        cin >> v >> t;
        
        for(int i=0; i<t; i++){
            timeB++;
            pos_b += v;
            b[timeB] = pos_b;
        }
    }

    int cnt=0, leader=0;
    for(int i=1; i<=timeA; i++){
        if(a[i] > b[i]){
            if(leader==2) {
                leader = 1;
                cnt++;
            }
            else leader = 1;
        }

        if(a[i] < b[i]){
            if(leader==1) {
                leader = 2;
                cnt++;
                }
            else leader = 2;
        }
    }

    cout << cnt;
    return 0;
}