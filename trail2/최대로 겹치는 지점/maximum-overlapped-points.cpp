#include <iostream>
using namespace std;

int arr[100];

int main() {
    int n;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        for(int i=a; i<=b; i++){
            arr[i]++;
        }
    }

    int max = arr[0];
    for(int i=1; i<100; i++){
        if(max < arr[i]) max = arr[i];
    }

    cout << max;

    return 0;
}