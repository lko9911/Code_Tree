#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%2!=0) { 
            cout << "* ";
            cout << endl;
            continue; 
        }
        for(int j=1; j<=i; j++){
        cout << "* "; 
        } 
    cout << endl;
    }
    return 0;
}