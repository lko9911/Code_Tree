#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int pos[100];
char alpha[100];
char gh[101];

int main() {
    cin >> N;

    vector<pair<int,char>> people;

    for (int i = 0; i < N; i++) {
        cin >> pos[i] >> alpha[i];
        people.push_back({pos[i], alpha[i]});
    }

    sort(people.begin(), people.end());
    int answer = INT_MIN;

    for(int i=0; i< N; i++){
        int gcnt=0,hcnt=0;
        
        for(int j=i; j<N; j++){
            if(people[j].second == 'G') gcnt++;
            else hcnt++;

            if(gcnt == 0 || hcnt ==0 || gcnt==hcnt){
                int length = people[j].first - people[i].first;
                answer = max(length, answer);
            }
        }
    }

    cout << answer;

    return 0;
}