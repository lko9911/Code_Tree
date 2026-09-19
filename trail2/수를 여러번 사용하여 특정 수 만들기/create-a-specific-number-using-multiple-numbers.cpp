#include <iostream>

using namespace std;

int A, B, C;

int main() {
    cin >> A >> B >> C;

    int answer = 0;

    for(int i=0; A*i <=C; i++){
        for(int j=0; A*i + B*j<=C; j++){
            int num = A*i + B*j;

            if(num > answer)
            answer = num;
        }
    }

    cout << answer;
    return 0;
}