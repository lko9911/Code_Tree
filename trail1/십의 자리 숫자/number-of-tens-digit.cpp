#include <iostream>
using namespace std;

int main() {
    int count_arr[100]={};
    int arr[100]={};

    for(int i=0; i<100; i++){
        cin >> arr[i];
        count_arr[arr[i]]++;
        if(arr[i]==0){
            break;
        }
    }

    for(int i =1; i <=9; i++){

        int sum=0;

        for(int j=10*i; j<=10*i+9; j++){
            sum+=count_arr[j];    
        }

        cout << i << " - " << sum << endl;
    }

    return 0;
}