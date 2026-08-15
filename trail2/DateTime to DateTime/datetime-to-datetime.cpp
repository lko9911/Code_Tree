#include <iostream>
using namespace std;

int main() {
    int a,b,c, total_min=0;
    cin >>  a >> b >> c;

    total_min = a*24*60 + b*60 + c;
    int ref = 11*24*60 + 11*60 + 11;

    if(total_min < ref) cout << -1;
    else cout << total_min - ref;
    
    
    return 0;
}