#include <iostream>
using namespace std;

int arr[3];
int a[100], b[100], c[100];

int score(int arr[], int a, int b, int c){
    int temp = arr[a-1];
    arr[a-1] = arr[b-1];
    arr[b-1] = temp;

    return arr[c-1];
}

int main() {

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    int ans=0;
    for(int i=0; i<3; i++){
        int result =0;
        for(int j=0; j<3; j++){
            if(i==j) arr[j] =1;
            else arr[j] = 0;
        }
        for(int k=0; k<n; k++)
            result += score(arr,a[k],b[k],c[k]);
        ans = max(ans,result);
    }

    cout << ans;

    return 0;
}