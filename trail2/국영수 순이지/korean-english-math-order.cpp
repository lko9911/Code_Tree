#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string name[10];
int korean[10];
int english[10];
int math[10];

class Score{
    public:
        string name;
        int kor, eng, math;
        Score(){};
        Score(string name, int kor, int eng, int math){
            this-> name = name;
            this-> kor = kor;
            this-> eng = eng;
            this-> math = math;
        }
};

bool cmp(Score a, Score b){
    if(a.kor != b.kor) return a.kor > b.kor;

    if(a.eng != b.eng) return a.eng > b.eng;

    if(a.math != b.math) return a.math > b.math;
}

int main() {
    cin >> n;

    Score s[10];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> korean[i];
        cin >> english[i];
        cin >> math[i];

        s[i] = Score(name[i], korean[i], english[i], math[i]);
    }

    sort(s,s+n,cmp);

    for (int i = 0; i < n; i++) {
        cout << s[i].name << " " << s[i].kor << " " << s[i].eng << " " << s[i].math << endl;
    }

    return 0;
}