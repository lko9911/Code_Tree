#include <iostream>
using namespace std;

int main() {
    int a,b;
    string n;
    cin >> a >> b >> n;

    int num =0;
    for(int i=0; i<n.length(); i++)
        num = num*a + (n[i]-'0');
    
    int digital[20], cnt=0;
    while(1){
        if(num<b){
            digital[cnt++] = num;
            break;
        }
        digital[cnt++] = num%b;
        num/=b;
    }

    for(int i=cnt-1; i>=0; i--){
        cout << digital[i];
    }

    return 0;
}