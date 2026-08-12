#include <iostream>
using namespace std;

int Sum(int n){
    if(n/10==0) return n;

    return Sum(n/10) + n%10;
}
int main() {
    int x,y,z;
    cin >> x >> y >> z;

    int result = x*y*z;

    cout << Sum(result);

    return 0;
}