#include <iostream>
using namespace std;

int arr[100];

int main() {
    int n, cnt=0;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int ref = 0;
            for(int k=i; k<=j; k++){
                ref += arr[k];
            }

            for(int k=i; k<=j; k++){
                if(ref == arr[k]*(j-i+1)) {
                    cnt++;
                    break;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}