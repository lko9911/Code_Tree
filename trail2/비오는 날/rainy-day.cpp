#include <iostream>
using namespace std;

class Weather{
    public:
        int year;
        int month;
        int day;
        string c2;
        string w;
        Weather(int year, int month, int day,string c2, string w){
            this-> year = year;
            this-> month = month;
            this-> day = day;
            this-> c2 = c2; 
            this-> w = w;
        }
        Weather(){};
};

int main() {
    Weather weather[100];
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int y,m,d;
        char c1;
        string c2;
        string w;

        cin >> y >> c1 >> m >> c1 >> d >> c2 >> w;

        weather[i] = Weather(y,m,d,c2,w);
    }

    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            if(weather[i].year > weather[j].year){
                Weather temp = weather[j];
                weather[j] = weather[i];
                weather[i] = temp;
            }
            else if(weather[i].year == weather[j].year)
                    if(weather[i].month > weather[j].month){
                        Weather temp = weather[j];
                        weather[j] = weather[i];
                        weather[i] = temp;
                    }
                    else if(weather[i].month == weather[j].month)
                         if(weather[i].day > weather[j].day){
                            Weather temp = weather[j];
                            weather[j] = weather[i];
                            weather[i] = temp;
                         }

        }
    }

    for(int i=0; i<n; i++)
        if(weather[i].w == "Rain"){
            cout << weather[i].year  << "-"; 
            cout << (weather[i].month<10 ? "0" : "") << weather[i].month << "-"; 
            cout << (weather[i].day<10 ? "0" : "") << weather[i].day << " ";
            cout << weather[i].c2 << " " <<  weather[i].w;
            break;
        }
    

    return 0;
}