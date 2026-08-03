#include <iostream>
using namespace std;

int main() {
    int a,b;
    int count[10]={};
    cin >> a >> b;

    while(1){
    int result=0;
 
    result = a%b;
    a/=b;
    count[result]++;
    
    if(a<=1) break;
    }

    int sum=0;

    for(int i=0; i<=9; i++){
        sum  = sum + count[i]*count[i];
    }
    cout << sum;

    return 0;
}