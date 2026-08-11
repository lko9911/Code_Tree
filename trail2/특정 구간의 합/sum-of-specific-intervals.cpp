#include <iostream>
using namespace std;

int n, m;
int arr[100];

int Sum(int a, int b){
    int sum=0;

    for(int i=a-1; i<b; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while(m--){
        int a,b;
        cin >> a >> b;
        cout << Sum(a,b) << endl;
    }



    return 0;
}