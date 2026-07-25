#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    
    int c[10];
    
    c[0] = a;
    c[1] = b;
    c[2] = (a + b)%10;

    for(int i = 3; i<10; i++){
        c[i] = ((c[i-1] % 10) + (c[i-2] % 10))%10;
    }

    for(int i = 0; i<10; i++){
        cout << c[i] << " ";
    }
    
    return 0;
}