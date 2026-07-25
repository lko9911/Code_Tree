#include <iostream>
using namespace std;

int main() {
    int n,a,b;
    cin >> n;
    while(n--){
    int total=0;
        cin >> a >> b;
        for(int i = a; i<=b; i++){
            if(i%2==1) continue;
            total += i;
        }
    cout << total << endl;
    }
    return 0;
}