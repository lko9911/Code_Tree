#include <iostream>
using namespace std;

bool check(int month, int day){
if(month<=0 || month >=13) return false;

if(month==2)
        if(day >=1 && day <=28) return true;
        else return false;

    if((month%2!=0 && month <=7) || (month%2==0 && month >7))
        if(day >=1 && day <=31) return true;
        else return false;
    else if((month%2!=0 && month >7) || (month%2==0 && month <=7))
        if(day >=1 && day <=30) return true;
        else return false;


}

int main() {
    int m,d;
    cin >> m >> d;

    cout << (check(m,d) ? "Yes" : "No");
    return 0;
}