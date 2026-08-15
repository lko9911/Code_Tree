#include <iostream>

using namespace std;

int n, b;

int main() {
    int cnt=0;
    cin >> n >> b;
    int digital[1000];

    while(true){
        if(n<b){
            digital[cnt++] = n;
            break;
        }
        digital[cnt++] = n%b;
        n /=b;
    }

    for(int i=cnt-1; i>=0; i--){
        cout << digital[i]; 
    }

    return 0;
}