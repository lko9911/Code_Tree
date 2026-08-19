#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        string s; int num;
        cin >> s;
        if(s == "push_back") {
            cin >> num;
            v.push_back(num);
        }
        else if(s == "get") {
            cin >> num;
            cout << v[num-1] << endl;
        }
        else if(s == "size") cout << v.size() << endl;
        else if(s == "pop_back") v.pop_back();

    }


    return 0;
}