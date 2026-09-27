#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];
int count[101];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        for(int j=x1[i]; j<=x2[i]; j++){
            count[j]++;
        }

    }

    bool answer = false;
    for (int i = 0; i < 100; i++) {
        if(count[i]==n) answer = true;
    }

    if(answer) cout << "Yes";
    else cout << "No";

    return 0;
}