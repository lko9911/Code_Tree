#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    cin >> n;    

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        int max = arr[i];
        for(int j=i; j<n; j++){
            if(max < arr[j]){ 
                max = arr[j];
                arr[j] = arr[i];
                arr[i] = max;
            }
        }
    }

    cout << arr[0] << " " << arr[1];

    return 0;
}