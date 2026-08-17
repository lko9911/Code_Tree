#include <iostream>
#include <climits>
using namespace std;

int X, Y;

int check(int n){
    int sum=0;
    while(1){
        if(n/10 == 0){
            sum = sum + n%10;
            break;
        }
        sum = sum + n%10;
        n /=10;
    }
    return sum;
}

int main() {
    cin >> X >> Y;

    int ans = INT_MIN;
    for(int i=X; i<=Y; i++){
        int result = check(i);
        ans = max(ans, result);
    }

    cout << ans;

    return 0;
}