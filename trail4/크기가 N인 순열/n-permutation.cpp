#include <iostream>
#include <vector>
using namespace std;

vector<int> selected;
bool visited[9];
int n;

void printAnswer(){
    for(int i=0; i<n; i++){
        cout << selected[i] << " ";
    }
    cout << endl;
}

void dfs(int cnt){
    if(selected.size() == n){
        printAnswer();
        return;
    }

    for(int i=1; i<=n; i++){
        if(visited[i]) continue; 

        selected.push_back(i);
        visited[i] = true;

        dfs(cnt + 1);
        selected.pop_back();
        visited[i] = false;
    }
}

int main() {
    cin >> n;

    dfs(1);

    return 0;
}
