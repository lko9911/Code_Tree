#include <iostream>
using namespace std;

int main() {
    int n, max=-1, cnt=0;
    int arr[1000], count[1000]={};

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        count[arr[i]]++;
    }

    for(int i=0; i<1000; i++)  
        if(count[i]==1 && (max < i)) max=i;

    cout << max;

    return 0;
}