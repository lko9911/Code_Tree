#include <iostream>
#include <climits>
using namespace std;

int arr[1000];
int count[1000];

int main() {
    int n;
    
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int cnt = 1;
    int maxcnt=1;
    for(int i=0; i<n-1; i++){
        if((arr[i]<0) == (arr[i+1]<0))
            cnt++;
        else cnt = 1;

        if(maxcnt < cnt) maxcnt = cnt;
    }

    cout << maxcnt;

    return 0;
}