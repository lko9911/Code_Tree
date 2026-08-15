#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int num=0;
    for(int i=0; i<str.length(); i++){
        num = num * 2 + (str[i]-'0');
    }

    num *=17;
    int digital[1000], cnt=0;
    int n = num;
        while(1){
        if(n<2){
            digital[cnt++] = n;
            break;
        }

        digital[cnt++] = n%2;
        n/=2;
    }

    for(int i=cnt-1; i>=0; i--){
     cout << digital[i];
    }


    return 0;
}