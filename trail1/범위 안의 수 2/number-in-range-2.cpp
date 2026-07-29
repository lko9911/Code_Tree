#include <iostream>
using namespace std;

int main() {
    int sum=0, cnt=0;

    int i=10;
    while(i--){
    int n;
    cin >> n;
        if(n >=0 && n<=200){
            sum +=n;
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " <<  (double) sum/cnt;

    return 0;
}