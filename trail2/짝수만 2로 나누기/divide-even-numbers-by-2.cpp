#include <iostream>
using namespace std;

void Modifty(int *x,int n){
    for(int i=0; i<n; i++)
        if(x[i]%2==0) x[i] = x[i]/2;
}

int main() {
    int arr[50];
    int n;
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    Modifty(arr,n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}