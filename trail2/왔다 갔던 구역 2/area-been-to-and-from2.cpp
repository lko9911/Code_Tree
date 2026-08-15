#include <iostream>
using namespace std;

int arr[2000];

int main() {
    int n;
    cin >> n;

    int idx=1000;
    while(n--){
        int number;
        char c;
        cin >> number >> c;

        if(c=='R'){
        for(int i=0; i<number; i++){
            arr[idx+i]++;
            }
        idx = idx + number;
        }
        else if(c=='L'){
            for(int i=1; i<=number; i++){
            arr[idx-i]++;
        }
        idx = idx - number;
        }
    }

    int cnt=0;
    for(int i=0; i<2000; i++){
        if(arr[i]>=2) cnt++;
    }

    cout << cnt;

    return 0;
}