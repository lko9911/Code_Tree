#include <iostream>
#include <vector>
using namespace std;

int K, N;

vector<int> selected;

void check(){
    for(int i=0; i<selected.size(); i++){
        cout << selected[i] << " ";
    }
    cout << endl;
}

void dfs(int cnt){
    if(selected.size() == N){
        check();
        return;
    }

    for(int i=1; i<=K; i++){
        selected.push_back(i);
        dfs(cnt + 1);
        selected.pop_back();
    }
}

int main() {
    cin >> K >> N;

    dfs(1);

    return 0;
}
