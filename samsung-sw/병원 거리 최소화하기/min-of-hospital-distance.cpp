#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> selected;
vector<pair<int,int>> person;
vector<pair<int,int>> hos;

int n,m, answer = INT_MAX;

void check(){
    int total = 0;
    for(int i=0; i<person.size(); i++){
        int x = person[i].first;
        int y = person[i].second;
        int ref = INT_MAX;
        for(int j=0; j<m; j++){
            int x2 = hos[selected[j]].first;
            int y2 = hos[selected[j]].second;
            int diff = abs(x - x2) + abs(y - y2);
            ref = min(diff, ref);
        }
        total += ref;
    }
    answer = min(total, answer);
}

void dfs(int start, int cnt){
    if(selected.size() == m){
        check();
        return;
    }

    for(int i = start; i<hos.size(); i++){
        selected.push_back(i);
        dfs(i+1, cnt+1);
        selected.pop_back();
    }
}

int main() {
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int value;
            cin >> value;
            if(value == 1){
                person.push_back({i,j});
            } else if(value == 2){
                hos.push_back({i,j});
            }
        }
    }

    dfs(0,0);

    cout << answer;
    return 0;
}