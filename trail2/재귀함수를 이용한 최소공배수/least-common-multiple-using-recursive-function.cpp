#include <iostream>
using namespace std;


int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int lcd(int a, int b){
    return a*b/gcd(a,b);
}

int main() {
    int n;
    int arr[10];

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int result;

    if(n>1){
    result = lcd(arr[0], arr[1]);
    for(int i=2; i<n; i++)
        result = lcd(result,arr[i]);
    } else {
    result = arr[0];
    }
    cout << result;

    return 0;
}