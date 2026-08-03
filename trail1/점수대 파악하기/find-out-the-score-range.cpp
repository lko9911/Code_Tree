#include <iostream>
using namespace std;

int main() {
    int arr[100]={}, count[11]={};

    for(int i=0; i<100; i++){
        cin >> arr[i];
        if(arr[i] == 0) break;
        count[arr[i]/10]++;
    }

    for(int i=10; i>=1; i--){
        cout << i*10 << " - " << count[i] << endl;
    }
    return 0;
}