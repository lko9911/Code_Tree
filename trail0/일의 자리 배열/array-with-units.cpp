#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    
    int c[10] = {a,b};

    for(int i=2; i<10; i++) 
        c[i] = (c[i-1] + c[i-2])%10;

    for(int i=0; i<10; i++) 
        cout << c[i] << " ";

    return 0;
}