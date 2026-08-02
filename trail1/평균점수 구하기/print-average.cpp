#include <iostream>
using namespace std;

int main() {

    double arr[8], sum=0;
    double avg=0;

    for(int i=0; i<8; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    avg = (double)sum/8;

    cout << fixed;
    cout.precision(1);

    cout << avg << endl;

    return 0;
}