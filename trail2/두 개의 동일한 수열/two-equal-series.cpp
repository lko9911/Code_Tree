#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[100], b[100];
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);

    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    sort(b,b+n);

    bool flage=true;
    for(int i=0; i<n; i++){
        if(a[i]!=b[i]) flage=false;
    }

    cout << (flage ? "Yes" : "No"); 
    return 0;
}