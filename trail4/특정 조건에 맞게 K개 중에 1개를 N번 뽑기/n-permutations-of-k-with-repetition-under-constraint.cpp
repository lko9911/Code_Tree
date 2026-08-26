#include <iostream>
#include <vector>
using namespace std;

vector<int> selected;

int K, N;

void ans(){
    for(int i=0; i<N; i++){
        cout << selected[i] << " ";
    }
    cout << endl;
}

void dfs(int cnt){
    if(selected.size()==N){
        ans();
        return;
    }

    for(int i=1; i<=K; i++){

        if(selected.size() >= 2 && selected[selected.size()-2]==i && selected[selected.size()-1]==i) continue;

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
