#include <iostream>
using namespace std;

int main() {
    int n, cnt=0;
    cin >> n;

    int score[4];

    while(n--){
        int sum=0;
        double avg=0;
        
        for(int i=0; i<4; i++){
        cin >> score[i];
        sum += score[i];
        }

        avg = (double)sum/4;

        if(avg >= 60) {
            cout << "pass" << endl;
            cnt++;
        }
        else cout << "fail" << endl;

    }

    cout << cnt;
    return 0;
}