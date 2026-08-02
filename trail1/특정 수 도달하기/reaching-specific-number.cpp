#include <iostream>
using namespace std;

int main() {
    int arr[10], sum=0, cnt=0;
    double avg=0;

    for(int i=0; i<10; i++){
        cin >> arr[i];
        if(arr[i]>250)
            break;
        sum += arr[i];
        cnt++;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum/cnt;
    return 0;
}