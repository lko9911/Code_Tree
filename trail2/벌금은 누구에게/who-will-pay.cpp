#include <iostream>
using namespace std;

int student[100];

int main() {
    int n, m, k, p;
    cin >> n >> m >> k;

    for(int i=0; i<n; i++){
        student[i] = k;
    }

    int ans = -1;
    for(int i=0; i<m; i++){
        cin >> p;
        student[p-1]--;
   
        if(student[p-1]==0) {
            ans = p;
            break;
        }
    }

    cout << ans;
    return 0;
}