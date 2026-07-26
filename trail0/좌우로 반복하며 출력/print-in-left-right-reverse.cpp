#include <iostream>
using namespace std;

int main() {
    int n, rows[9], cnt=1;
    cin >> n;
    
    for(int i = 0; i<n; i++){
        rows[i] = cnt;
        cnt++;
    }

    for(int i = 0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<n; j++)
                cout << rows[j];
        } else {
            for(int j=n-1; j>=0; j--)
                cout << rows[j];
        }
        cout << endl;
    }
    return 0;
}