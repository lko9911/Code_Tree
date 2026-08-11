#include <iostream>
using namespace std;

class game{
    public:
        string id;
        int level;
        game(string id="codetree", int level=10){
            this-> id = id;
            this-> level = level;
        }
};

int main() {
    string id;
    int level;
    cin >> id >> level;
    game people0;
    game people1(id, level);
    cout << "user " << people0.id << " lv "  << people0.level << endl;
    cout << "user " << people1.id << " lv " << people1.level << endl;
    return 0;
}