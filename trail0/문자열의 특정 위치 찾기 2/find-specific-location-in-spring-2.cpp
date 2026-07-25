#include <iostream>
using namespace std;

int main() {
    string s[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char check;
    int cnt= 0;

    cin >> check;
    
    for(int i = 0; i<5; i++){
        if(s[i][2] == check || s[i][3] == check){
            cout << s[i] << endl;
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}