#include <iostream>
#include <vector>
using namespace std;

vector<int> selected;
int N, M;

void show(){
    for(int i=0; i<M; i++){
        cout << selected[i] << " ";
    }
    cout << endl;
}

void dfs(int start, int cnt){
    if(cnt == M){
        show();
    }

    for(int i=start; i<=N; i++){

        selected.push_back(i);
        dfs(i + 1, cnt + 1);
        selected.pop_back();
    }
}

int main() {
    cin >> N >> M;

    dfs(1,0);

    return 0;
}
