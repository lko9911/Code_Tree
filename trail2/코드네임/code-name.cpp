#include <iostream>
#include <climits>
using namespace std;

class Code {
    public:
        char codename;
        int score;

        Code() { }

        Code(char codename, int score){
            this->codename = codename;
            this->score = score;
        }
};

int main() {
    char codename;
    int score;

    Code people[5];

    int min = INT_MAX;
    for(int i=0; i<5; i++){
        cin >> people[i].codename >> people[i].score; 
    }
    int idx = 0;
    for(int i=0; i<5; i++){
        if(min > people[i].score) {
            min = people[i].score;
            idx = i;
        } 
    }

    cout << people[idx].codename << " " << people[idx].score;
    return 0;
}