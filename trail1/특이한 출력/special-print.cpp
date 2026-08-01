#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) 
            if((i+j)%4==0) cout << "(" <<  i << ", " << j << ") " <<  endl;
            else cout << "(" <<  i << ", " << j << ") ";

    return 0;
}