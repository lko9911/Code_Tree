#include <iostream>
using namespace std;

int main() {
    int t1,t2,t3;
    char c1,c2,c3;
    int cnt = 0;

    cin >> c1 >> t1 >> c2 >> t2 >> c3 >> t3;

    if(c1 == 'Y' && t1 >= 37) cnt++;
    if(c2 == 'Y' && t2 >= 37) cnt++;
    if(c3 == 'Y' && t3 >= 37) cnt++;

    if(cnt >= 2) cout << "E";
    else cout << "N";

    return 0;
}