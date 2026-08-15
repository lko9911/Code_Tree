#include <iostream>
#include <algorithm>
using namespace std;

class people{
    public:
        string name;
        int height;
        double weight;
        
        people(){};
        people(string name, int height, double weight){
            this-> name = name;
            this-> height = height;
            this-> weight = weight;
        }
};

bool cmp1(people a, people b){
    return a.height > b.height;
}

bool cmp2(people a, people b){
    return a.name < b.name;
}

int main() {
    people person[5];

    for(int i=0; i<5; i++){
        cin >> person[i].name >> person[i].height >> person[i].weight; 
    }

    sort(person, person+5, cmp2);

    cout << fixed;
    cout.precision(1);
    cout << "name" << endl;
    for(int i=0; i<5; i++){
        cout << person[i].name << " " << person[i].height << " " << person[i].weight << endl; 
    }

    cout << "\n";
    sort(person, person+5, cmp1);

    cout << "height" << endl;
    for(int i=0; i<5; i++){
        cout << person[i].name << " " << person[i].height << " " << person[i].weight << endl; 
    }

    return 0;
}