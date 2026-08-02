#include <iostream>
using namespace std;

int main() {
    int arr[10], sum=0, cnt=0;;
    double avg=0;

     for(int i=0; i<10; i++){
        cin >> arr[i];
        if(arr[i]==0) break;
        sum +=arr[i];
        cnt++;
    }
    avg = (double)sum/cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;

    return 0;
}