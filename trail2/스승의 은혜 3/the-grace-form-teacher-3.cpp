#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int N, B;
int P[1000], S[1000];
int new_cost[1000];

int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> P[i] >> S[i];
    }

    int answer = INT_MIN;
    for(int i=0; i<N; i++){

        vector<int> v;

        for(int j=0; j<N; j++){
            if(i==j) v.push_back(P[j]/2+S[j]);
            else v.push_back(P[j]+S[j]);
        }

        sort(v.begin(),v.end());

        int cnt=0;
        int B_new = B;
        for(int j=0; j<v.size(); j++){
            B_new -= v[j];
            if(B_new>=0) cnt++;
        }
        
        answer = max(answer, cnt);
    }

    cout << answer;
    return 0;
}