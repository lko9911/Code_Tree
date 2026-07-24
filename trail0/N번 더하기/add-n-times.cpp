#include <iostream>
using namespace std;

int main() {
    int A, N;
    cin >> A >> N;
    int sum = A;

    for(int i=0; i< N; i++){
        cout << sum+N << endl;
        sum += N;
    } 
    return 0;
}