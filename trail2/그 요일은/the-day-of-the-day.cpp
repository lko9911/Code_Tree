#include <iostream>
using namespace std;

int m2d(int month){
    if(month == 2) return 29;
    if(month == 4 || month == 6 || month == 9 || month == 11) return 30;
    else return 31;
}

string check(int a, int b){
    int ref = b - a;
    if(ref%7 == 0) return "Mon";
    else if(ref%7 == 1) return "Tue";
    else if(ref%7 == 2) return "Wed";
    else if(ref%7 == 3) return "Thu";
    else if(ref%7 == 4) return "Fri";
    else if(ref%7 == 5) return "Sat";
    else return "Sun";

}

int main() {
    int m1,m2,d1,d2, total_day_1=0, total_day_2=0;
    string week;
    cin >> m1 >> d1 >> m2 >> d2 >> week;

    for(int i=1; i<m1; i++){
        total_day_1 += m2d(i);
    }

    for(int i=1; i<m2; i++){
        total_day_2 += m2d(i);
    }
    total_day_1 += d1;
    total_day_2 += d2;

    string str;
    int cnt=0;

    for(int i=0; i<=total_day_2-total_day_1; i++){
        str = check(total_day_1,total_day_1+i);
        if(str == week) cnt++;
    }

    cout << cnt;

    return 0;
}