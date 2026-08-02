#include <iostream>
using namespace std;

int main() {

    int arr[10], index=10;

    for(int i=0; i<10; i++){
        cin >> arr[i];
        if(arr[i]==0){
        index = i;
        break;
    } 
    }

    for(int i=index-1; i>=0; i--){
        cout << arr[i] << " ";
    }

    return 0;
}