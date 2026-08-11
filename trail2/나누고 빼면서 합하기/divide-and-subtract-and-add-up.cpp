#include <iostream>
using namespace std;

int arr[100];

int Sum(int m){
    int sum=0;
    while(m>0){
        sum += arr[m-1];
        if(m%2==0) m/=2;
        else m--;
    }   
    return sum;
}

int main() {
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cout << Sum(m);


    return 0;
}