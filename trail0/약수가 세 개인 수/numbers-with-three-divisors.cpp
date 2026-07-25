#include <iostream>
using namespace std;

int main() {
    int start, end;
    int cnt;
    int num=0;
    cin >> start >> end;

    for(int i = start; i <= end; i++){
        for(int j=1; j<=i; j++){
            if(i%j==0) cnt++;
        }
    if(cnt == 3){
        num++;
    }
    cnt =0;
    }
    cout << num;
    return 0;
}