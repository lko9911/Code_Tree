#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[1001];
bool visited[1001];

int cnt=0;

int n, m;
int from[10000], to[10000];


void dfs(int start){
    visited[start] = true;

    for(auto next : graph[start]){
        if(visited[next]) continue;

        cnt++;
        dfs(next);
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a,b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1);

    cout << cnt;

    return 0;
}
