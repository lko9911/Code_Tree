#include <iostream>
using namespace std;

int main() {
    int n;
    int count_arr[10]={};
    int arr[100]={};

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n; i++)
        count_arr[arr[i]]++;
    
    for(int i=1; i<10; i++)
        cout << count_arr[i] << endl;

    return 0;
}