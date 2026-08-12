#include <iostream>
using namespace std;

#define MAX 999999

int main() {
    int n, degital[MAX], cnt=0;
    cin >> n;

    while(1){
        if(n<2){
            degital[cnt++] = n;
            break;
        }
        degital[cnt++] = n%2;
        n /=2;
    }

    for(int i=0; i<cnt; i++){
        cout << degital[cnt-i-1] ;
    }
    return 0;
}