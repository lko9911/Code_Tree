#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 10

using namespace std;

int n;
string name[MAX_N], address[MAX_N], region[MAX_N];

class people{
    public:
        string name;
        string adr;
        string c;
        people(string name, string adr, string c){
            this-> name=name;
            this-> adr=adr;
            this-> c=c;
        }
        people(){ }
};  

int main() {
    cin >> n;
    people person[10];

    for (int i = 0; i < n; i++) {
        cin >> name[i] >> address[i] >> region[i];
        person[i] = people(name[i], address[i], region[i]);
    }

    for(int i=0; i < n-1; i++){
        for(int j=i; j<n; j++)
        if(person[i].name > person[j].name){
            people temp = person[j];
            person[j] = person[i];
            person[i] = temp;
        }
    }

    cout << "name " << person[n-1].name << endl;
    cout << "addr " << person[n-1].adr << endl;
    cout << "city " << person[n-1].c << endl;
    return 0;
}
