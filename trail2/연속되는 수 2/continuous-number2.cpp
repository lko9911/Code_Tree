#include <iostream>
using namespace std;

int main() {
    int n, arr[1000], count[1000]={0};
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n; i++){
        if(i==0 || arr[i-1]!=arr[i]){
            int cnt=1;
            for(int j=i; j<n-1; j++){
                if(arr[j]!=arr[j+1])
                    break;
                else cnt++;
            }
            count[i] = cnt;
        }
    }

    int max = count[0];
     for(int i=0; i<n; i++)
        if(max < count[i]) max = count[i];

    cout << max;

    return 0;
}