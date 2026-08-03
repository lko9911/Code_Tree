#include <iostream>
using namespace std;

int main() {
    int n, a[100], b[100];

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int j=0;

    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            b[j] = a[i];
            j++;
        }
    }
    

    for(int i=0; i<j; i++){
        cout << b[i] << " ";
    }

    return 0;
}