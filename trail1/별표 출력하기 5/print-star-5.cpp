#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int k=i; k<n; k++){
        for(int j=i; j<n; j++){
            cout << "*";
        }
        cout << " ";
        }
        cout << endl;
    }
    return 0;
}