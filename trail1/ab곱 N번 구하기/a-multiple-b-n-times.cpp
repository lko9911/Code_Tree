#include <iostream>
using namespace std;

int main() {
    int n, a,b;
    cin >> n;
    while(n--){
        cin >> a >> b;

        int s=1;
        for(int i=a; i<=b; i++){
            s *= i;           
        }
        cout << s << endl;
    }
    return 0;
}