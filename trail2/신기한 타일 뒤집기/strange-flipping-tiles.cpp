#include <iostream>
using namespace std;

#define MAX 200000
char arr[MAX];
int main() {
    int N;
    cin >> N;

    int idx = MAX/2;
    while(N--){
        int n;
        char c;
        cin >> n >> c;
        if(c=='R'){
            for(int i=0; i<n; i++){
                arr[idx + i] = 'b';
            }
            idx += n-1;
        }else if(c=='L'){
            for(int i=0; i<n; i++){
                arr[idx - i] = 'w';
            }
            idx -= n -1;
        }
    }

    int b=0, w=0;
    for(int i=0; i<MAX; i++)
        if(arr[i]=='b') b++;
        else if(arr[i]=='w') w++;
 
        cout << w << " " << b;

    return 0;
}