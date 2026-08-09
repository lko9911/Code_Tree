#include <iostream>
using namespace std;

int main() {
    string A,B;
    cin >> A >> B;
    int cnt=0;
    
    while(1){
        A = A.substr(A.length()-1,1) + A.substr(0,A.length()-1);
        cnt++;
        if(A == B) {
            cout << cnt;
            break;
        }
        if(cnt > A.length()) {
            cout << -1;
            break;
        }
    }

    return 0;
}