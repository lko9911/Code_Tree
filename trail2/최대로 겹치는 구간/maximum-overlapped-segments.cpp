#include <iostream>
#include <climits>
using namespace std;

int arr[200];

int main() {
    int n;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        for(int i=a+100; i<b+100; i++){
            arr[i]++;
        }

    }

    int max = INT_MIN;
    for(int i=0; i<200; i++){
        if(max < arr[i]) max = arr[i];
    }

    cout << max;

    return 0;
}