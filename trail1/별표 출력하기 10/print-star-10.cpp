#include <iostream>
using namespace std;

int main() {
    int n, cnt=1,cnt2=1;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%2!=0) { 
            for(int j=1; j<=cnt; j++) {
                cout << "* ";
            }
            cnt++;
        } else { 
            for(int j=1; j<=n-cnt2+1; j++) {
                cout << "* ";
            }
            cnt2++;
        }
    cout << endl;
    }

    if(n%2!=0){
    for(int i=1; i<=n; i++){
        if(i%2!=0) { 
            for(int j=1; j<=cnt-1; j++) {
                cout << "* ";
            }
            cnt--;
        } else { 
            for(int j=1; j<=n-cnt2+2; j++) {
                cout << "* ";
            }
            cnt2--;
        }   
        cout << endl;
    }
    } else {
    for(int i=1; i<=n; i++){
        if(i%2!=0) { 
            for(int j=1; j<=n-cnt2+2; j++) {
                cout << "* ";
            }
            cnt2--;
        } else { 

            for(int j=1; j<=cnt-1; j++) {
                cout << "* ";
            }
            cnt--;
        }   
        cout << endl;
    }
    }
    
    return 0;
}