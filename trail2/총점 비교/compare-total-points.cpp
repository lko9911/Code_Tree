#include <iostream>
#include <algorithm>
using namespace std;

int n;
string name[10];
int score1[10];
int score2[10];
int score3[10];

class Score{
    public:
        string name;
        int s1,s2,s3;
        Score(string name,int s1, int s2, int s3){
            this-> name=name;
            this-> s1 = s1;
            this-> s2 = s2;
            this-> s3 = s3;
        }
        Score(){};
};

bool cmp(Score a, Score b){
    return a.s1 + a.s2 + a.s3 < b.s1 + b.s2 + b.s3;
}

int main() {
    cin >> n;
    Score s[10];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> score1[i];
        cin >> score2[i];
        cin >> score3[i];

        s[i] = Score(name[i], score1[i], score2[i], score3[i]);
    }

    sort(s, s+n, cmp);

    for (int i = 0; i < n; i++) {
        cout << s[i].name << " " << s[i].s1 << " " << s[i].s2 << " " << s[i].s3 << endl;
    }

    return 0;
}