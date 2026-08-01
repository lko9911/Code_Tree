#include <iostream>
using namespace std;

int main() {
    int a,b, sum=0, cnt=0;
    cin >> a >> b;

    for(int i=a; i<=b; i++){
        for(int j=1; j<i; j++)
            if(i%j==0)
                sum +=j;
        if(i == sum){ 
            cnt++;
        }
        sum=0;
    }
    cout << cnt;
    return 0;
}