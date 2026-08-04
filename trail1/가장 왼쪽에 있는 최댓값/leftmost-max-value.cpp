#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[1000];

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int max = arr[0], idx=1000;

    int result = 1001;

    while(1){
        for(int i=0; i<n; i++){
            if(max < arr[i]){
                max = arr[i];
            }
        }

        for(int i=0; i<n; i++){
            if(max == arr[i]){
                result = i+1;
                n=i;
                max = arr[0];
                break;
            }
        }


    cout << result << " ";

    if(result == 1)
        break;

    }


    return 0;
}