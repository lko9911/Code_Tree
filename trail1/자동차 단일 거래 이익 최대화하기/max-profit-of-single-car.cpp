#include <iostream>
using namespace std;

int main() {
    int year, arr[1000]={};
    cin >> year;

    for(int i=0; i<year; i++){
        cin >> arr[i];
    }

    int max = arr[1] - arr[0];
    for(int i=0; i<year; i++){
        for(int j=i+1; j<year; j++)
            if(max < arr[j]-arr[i]) max = arr[j]-arr[i];
        if(max < 0) max=0;
    }

    cout << max;

    return 0;
}