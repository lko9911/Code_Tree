#include <iostream>
#include <algorithm>
using namespace std;

#define Max 2000000
int a[Max];
int b[Max];

int main() {
    int n,m, timeA=1, timeB=1;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        int t;
        char d;
        cin >> t >> d;

        if(d=='L'){
        while(t--){
            a[timeA] = a[timeA-1] - 1;
            timeA++;
        }
        } else if(d=='R'){
        while(t--){
            a[timeA] = a[timeA-1] + 1;
            timeA++;
        }    
        }  
    }

    for(int i=0; i<m; i++){
        int t;
        char d;
        cin >> t >> d;

        if(d=='L'){
        while(t--){
            b[timeB] = b[timeB-1] - 1;
            timeB++;
        }
        } else if(d=='R'){
        while(t--){
            b[timeB] = b[timeB-1] + 1;
            timeB++;
        }    
        }  
    }

    int Time = max(timeA,timeB); 

    for(int i=timeA; i<=Time; i++)
        a[i] = a[i-1];

    for(int i=timeB; i<=Time; i++)
        b[i] = b[i-1];

    int cnt=0;
    for(int i=1; i<=Time; i++)
        if(a[i]==b[i] && a[i-1]!=b[i-1])
            cnt++;
    

    cout << cnt;

    return 0;
}