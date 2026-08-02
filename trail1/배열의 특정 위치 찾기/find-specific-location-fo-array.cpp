#include <iostream>
using namespace std;

int main() {
    int arr[10], sum1=0, sum2=0, cnt=0;
    double avg=0;

    for(int i=0; i<10; i++){
        cin >> arr[i];
        if(i%2!=0) sum1 +=arr[i];
    }


    for(int i=2; i<10; i+=3){
        sum2 +=arr[i];
        cnt++;
    }
    
    cout << fixed;
    cout.precision(1);
    cout  << sum1 <<" " << (double)sum2/cnt;

    return 0;
}