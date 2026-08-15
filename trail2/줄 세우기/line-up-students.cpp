#include <iostream>
#include <algorithm>
using namespace std;

class people{
    public:
        int height;
        int weight;
        int number;
        people(){};
        people(int height, int weight, int number){
            this-> height = height;
            this-> weight = weight;
            this-> number = number;
        }
};

bool cmp(people a, people b){
    if(a.height != b.height) return a.height > b.height;
    if(a.weight != b.weight) return a.weight > b.weight;
    if(a.number != b.number) return a.number < b.number;

}

int main() {
    people person[1000];
    int n, idx=0;
    int height[1000], weight[1000];
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> height[i] >> weight[i];
        idx++;
        person[i] = people(height[i], weight[i], idx);
    }

    sort(person, person+n, cmp);


    for(int i=0; i<n; i++){
        cout << person[i].height << " " << person[i].weight << " " <<person[i].number  << endl; 
    }

    return 0;
}