#include <iostream>
using namespace std;

int a[100], b[100];

int main() {
    int n;
    cin >> n;

    int a_score=0 ,b_score=0;
    int before = 3;
    
    int cnt=0;
    for(int i=0; i<n; i++){
        char student;
        int score;
        cin >> student >> score;
        
        if(student == 'A'){
            a_score += score;
        } else if(student == 'B'){
            b_score += score;
        }

        int after;

        if(a_score > b_score) after = 1;
        else if(a_score < b_score) after = 2;
        else after = 3;

        if(before != after) {
            before = after;
            cnt++;
        }

    }
    cout << cnt;

    return 0;
}