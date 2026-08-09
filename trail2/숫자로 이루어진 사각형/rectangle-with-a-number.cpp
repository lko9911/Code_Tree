#include <iostream>
using namespace std;

void c(int n){
int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        cnt++;
        if(cnt>9) cnt=1;
        cout << cnt << " ";
        }
    cout << endl;
    }
    
}

int main() {
    int n;
    cin >> n ;
    c(n);
    return 0;
}