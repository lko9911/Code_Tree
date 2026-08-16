#include <iostream>
using namespace std;

char arr[10001];

int main() {
    int n,k;
    cin >> n >> k;

    for(int i=0; i<n; i++){
        int a;
        char c;
        cin >> a >> c;
        arr[a] = c;
    }

    int ans=0;
    for(int i=0; i<10001-k; i++){
        int ans_r = 0;
        for(int j=i; j<=i+k; j++)
            if(arr[j]=='G') ans_r +=1;
            else if(arr[j]=='H') ans_r+=2;
        ans = max(ans,ans_r);
    }

    cout << ans;

    return 0;
}