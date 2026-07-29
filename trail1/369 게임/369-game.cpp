#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;

    while(i<=n){
        int n1,n2,n3;
        n1 = i/100;
        n2 = (i%100) / 10;
        n3 = ((i%100)%10);

        if(i%3==0) cout << 0 << " ";
        else if((n1 == 3 || n1 == 6 || n1 ==9) || (n2 == 3 || n2 == 6 || n2 ==9) || (n3 == 3 || n3 == 6 || n3 ==9)) cout << 0 << " ";
        else cout << i << " ";

        i++;
    }
    return 0;
}