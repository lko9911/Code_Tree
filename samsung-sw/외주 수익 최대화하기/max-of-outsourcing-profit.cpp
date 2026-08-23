#include <iostream>
#include <algorithm>
using namespace std;

int n;
int t[20], p[20];

int answer = 0;

void dfs(int day, int sum){
    if(day >= n){
        answer = max(answer, sum);
    return;
    }

    if(day + t[day] <= n){
        dfs(day+t[day], sum + p[day]);
    } 

    dfs(day+1,sum);

}

int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t[i] >> p[i];
    }

    dfs(0,0);

    cout << answer;

    return 0;
}