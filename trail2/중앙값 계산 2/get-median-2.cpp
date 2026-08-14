#include <iostream>
#include <algorithm>
using namespace std;

void result(int arr[], int i){
    sort(arr,arr+i);
    cout << arr[i/2] << " ";

}

int main() {
    int arr[100];
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if((i+1)%2!=0)
            result(arr,i+1);
    }

    return 0;
}