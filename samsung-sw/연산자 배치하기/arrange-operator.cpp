#include <iostream>
#include <climits>
using namespace std;

int n;
int num[11];

int op[3];

int maxAns = INT_MIN;
int minAns = INT_MAX;

void dfs(int idx, int result){
    if(idx == n){
        maxAns = max(maxAns,result);
        minAns = min(minAns, result);
        return;
    }

    if(op[0] > 0){
        op[0]--;

        dfs(idx+1, result+num[idx]);

        op[0]++;
    }

    if(op[1] > 0){
        op[1]--;

        dfs(idx+1, result-num[idx]);

        op[1]++;
    }

    if(op[2] > 0){
        op[2]--;

        dfs(idx+1, result*num[idx]);

        op[2]++;
    }

}

int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> num[i];
    }

    cin >> op[0] >> op[1] >> op[2];

    dfs(1,num[0]);

    cout << minAns << " " << maxAns;

    return 0;
}