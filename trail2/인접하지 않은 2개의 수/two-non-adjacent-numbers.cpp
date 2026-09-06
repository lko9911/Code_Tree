#include <iostream>
#include <climits>
using namespace std;

int n;
int numbers[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int answer = INT_MIN;
    for(int i=0; i<n-2; i++){
        int sum=0;
        for(int j=i+2; j<n; j++){
            sum = numbers[i] + numbers[j];
            answer = max(sum, answer);
        }
    }

    cout << answer;
    return 0;
}