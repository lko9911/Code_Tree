#include <iostream>
using namespace std;

int main() {
    int n, cnt=1, arr[10][10];
    cin >> n;

    for(int j=n-1; j>=0; j--){
        if((j%2!=0 && n%2==0)||(j%2==0 && n%2!=0))
            for(int i=n-1; i>=0; i--) arr[i][j] = cnt++;
        else 
            for(int i=0; i<n; i++) arr[i][j] = cnt++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cout << arr[i][j] << " ";
    cout << endl;
    }

    return 0;
}