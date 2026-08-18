#include <iostream>
using namespace std;

int a[10000];

int main() {
    int n, sum=0;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }

    int base = sum/n;

    int cnt=0;
    for(int i=0; i<n; i++){
        if(base > a[i]){
            cnt += (base - a[i]);
        }
    }


    cout << cnt;
    return 0;
}