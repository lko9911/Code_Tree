#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

int n;
int p[20][20];

bool selected[20];

int answer = INT_MAX;

void calculate(){
    int mor = 0;
    int even = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(selected[i] && selected[j]) mor += p[i][j];
            else if(!selected[i] && !selected[j]) even += p[i][j];
        }
    }
    answer = min(answer, abs(mor - even));
}

void dfs(int idx, int cnt){
    if(cnt == n/2){
        calculate();
        return;
    }

    for(int i = idx; i < n; i++){
        selected[i] = true;
        dfs(i + 1, cnt + 1);
        selected[i] = false;
    }
}

int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        cin >> p[i][j];
    }

    dfs(0,0);

    cout << answer;

    return 0;
}