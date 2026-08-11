#include <iostream>
using namespace std;

bool check(int x[],int y[],int n,int m){

    for(int i=0; i<n-m+1; i++){
        bool flage = true;
        for(int j=0; j<m; j++){
            if(x[i+j]!=y[j]){
                flage = false;
                break;
            }
        }
        if(flage) return true;
    }
    return false; 
}

int main() {
    int n,m;
    cin >> n >> m;

    int a[100], b[100];

    for(int i=0; i<n; i++)
        cin >> a[i];

    for(int i=0; i<m; i++)
        cin >> b[i];
    
    cout << (check(a,b,n,m) ? "Yes" : "No");

    return 0;
}