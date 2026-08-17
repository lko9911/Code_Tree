#include <iostream>
#include <climits>
using namespace std;

int arr[100];

int main() {
    int n, min_result=INT_MAX;

      cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }


    for(int i=0; i<n; i++){
        arr[i] *=2;

        for(int j=0; j<n; j++){
            int arr_remain[100] = {};
            int cnt=0;
            for(int k=0; k<n; k++)
                if(k!=j) arr_remain[cnt++] = arr[k];

            int sum_diff=0;
            for(int k=0; k<n-2; k++){
                sum_diff += abs(arr_remain[k+1]-arr_remain[k]);
            }
            min_result = min(sum_diff,min_result);
        }
        arr[i] /=2;
    }
    
    cout << min_result;

    return 0;
}