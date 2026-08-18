#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int a,b,x,y;
    cin >> a >> b >> x >> y;

    int ans[3];

    ans[0] = abs(b-a);
    ans[1] = abs(x-a) + abs(b-y);
    ans[2] = abs(a-y) + abs(b-x);

    sort(ans,ans+3);

    cout << ans[0];
    

    return 0;
}