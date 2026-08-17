#include <iostream>
using namespace std;

int a[10], b[10];

int main() {
    int n, cnt=1;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }

    bool flage=false;
    for(int x=1;;x++){  
        int num=x;

        for(int i=0; i<n; i++){
        num *=2;
        if(num >=a[i] && num <=b[i]){
            flage=true;
        } else{
            flage = false;
            break;
        }
        }
        if(flage){
            cout << x;
            break;
        }
    }

    return 0;
}