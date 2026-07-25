#include <iostream>
using namespace std;

int main() {
    int a[10];
    int cnt3 = 0;
    int cnt5 = 0;

    for(int i =0; i< 10; i++){
        cin >> a[i];
    }

    for(int i =0; i< 10; i++){
        if(a[i]%3==0) cnt3++;
        if(a[i]%5==0) cnt5++;
    }   

    cout << cnt3 << " " << cnt5;
    return 0;
}