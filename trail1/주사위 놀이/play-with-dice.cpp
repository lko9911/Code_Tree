#include <iostream>
using namespace std;

int main() {
    int count_arr[7]={};
    int arr[10]={};

    for(int i=0; i<10; i++){
        cin >> arr[i];
        count_arr[arr[i]]++;
    }

    for(int i=1; i<7; i++)
        cout << i << " - " <<count_arr[i] << endl;

    return 0;
}