#include <iostream>
#include <climits>
using namespace std;

int arr[6];

int getsum(int i,int j, int k){
    int sum=0;
    int result = arr[i] + arr[j] + arr[k];

    for(int i=0; i<6; i++)
        sum += arr[i];

    int sum_result = sum - result;

    return abs(sum_result - result); 
}

int main() {
    
    for(int i=0; i<6; i++)
        cin >> arr[i];
    
    int ans = INT_MAX; 
    for(int i=0; i<4; i++)
        for(int j=i+1; j<5; j++)
            for(int k=j+1; k<6; k++)
            ans = min(ans,getsum(i,j,k));

    cout << ans;

    return 0;
}