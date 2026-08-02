#include <iostream>
using namespace std;

int main() {
    int arr[100]={0}, index=0;
    
    for(int i=0; i<100; i++){
        cin >> arr[i];
        if(arr[i]==0) {
        index=i;
        break;
        }
    }

    int sum=0;
    for(int i=index-3; i<=index-1; i++){
        sum += arr[i];
    }

   cout << sum;

    return 0;
}