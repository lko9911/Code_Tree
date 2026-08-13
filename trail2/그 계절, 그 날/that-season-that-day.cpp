#include <iostream>
using namespace std;

bool check_y(int year){
    if((year%4==0 && year%100!=0) || year%400==0) return true;
    else return false;
}

void weather(int month){
    if(month >=3 && month <=5) cout << "Spring";
    else if(month >=6 && month <=8) cout << "Summer";
    else if(month >= 9 && month <=11) cout << "Fall";
    else cout << "Winter";
}


void yun_year(int month, int day){
    if(month < 1 || month >12) cout << -1;
    else if(month == 2) 
        if(day >= 1 && day <=29) cout << "Winter";
        else cout << -1; 
    else if(month == 4 || month == 6 || month == 9 || month == 11)
        if(day < 1 || day > 30) cout << -1;
        else weather(month);
    else 
        if(day < 1 || day > 31) cout << -1;
        else weather(month);
}


void not_yun_year(int month, int day){
    if(month < 1 || month >12) cout << -1;
    else if(month == 2) 
        if(day >= 1 && day <=28) cout << "Winter";
        else cout << -1; 
    else if(month == 4 || month == 6 || month == 9 || month == 11)
        if(day < 1 || day > 30) cout << -1;
        else weather(month);
    else 
        if(day < 1 || day > 31) cout << -1;
        else weather(month);

}

int main() {
    int Y,M,D;
    cin >> Y >> M >> D;

    if(check_y(Y)) yun_year(M,D);
    else not_yun_year(M,D);

    return 0;
}