#include <iostream>
using namespace std;

int main() {
    int arr[10], u[10]={}, d[10]={};

    for(int i=0; i<10; i++){
        cin >> arr[i];
        if(arr[i] < 500) u[i] = arr[i];
        else if(arr[i] > 500) d[i] = arr[i];
    }

    int max=0, min=1000;
    for(int i=0; i<10; i++){
        if(max < u[i]) {
            max = u[i];
        }
        if(min > d[i] && d[i]!=0) {
            min = d[i];
        }
    }

    cout << max << " " << min;

    return 0;
}