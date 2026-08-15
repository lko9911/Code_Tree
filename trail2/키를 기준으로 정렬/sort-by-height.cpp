#include <iostream>
#include <algorithm>
using namespace std;

class people{
    public:
        string name;
        int height;
        int weight;
        
        people(){};
        people(string name, int height, int weight){
            this-> name = name;
            this-> height = height;
            this-> weight = weight;
        }
};

bool cmp(people a, people b){
    return a.height < b.height;
}

int main() {
    people person[10];
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> person[i].name >> person[i].height >> person[i].weight; 
    }

    sort(person, person+n, cmp);


    for(int i=0; i<n; i++){
        cout << person[i].name << " " << person[i].height << " " << person[i].weight << endl; 
    }

    return 0;
}