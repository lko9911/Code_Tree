#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int n,m, answer = INT_MAX;
vector<pair<int,int>> people;
vector<pair<int,int>> hos;
vector<int> selected;

void check(){
    int total = 0;
    for(int i=0; i<people.size(); i++){
        int x = people[i].first;
        int y = people[i].second;
        int dis,ref=INT_MAX;
        for(int j=0; j<m; j++){
            int x2 = hos[selected[j]].first;
            int y2 = hos[selected[j]].second;
            dis = abs(x-x2) + abs(y-y2);
            ref = min(dis,ref);
        }
        total += ref;
    }
    answer = min(total,answer);
}

void dfs(int x){
    if(selected.size() == m){
        check();
        return;
    }

    for(int i=x; i<hos.size(); i++){
        selected.push_back(i);
        dfs(i+1);
        selected.pop_back();
    }

}


int main() {
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int value;
            cin >> value;
            if(value == 1) people.push_back({i,j}); 
            else if(value == 2) hos.push_back({i,j}); 
        }
    }  

    dfs(0);
    
    cout << answer;
    return 0;
}