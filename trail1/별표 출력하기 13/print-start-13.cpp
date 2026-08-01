#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n*2; i++){
        if(i%2==0)
            for(int k = 1; k< 1+ i/2; k++) cout << "* ";
        else 
            for(int k = 1; k <= n - (i+1)/2 + 1; k++) cout << "* ";
    cout << endl;
    }
    return 0;
}