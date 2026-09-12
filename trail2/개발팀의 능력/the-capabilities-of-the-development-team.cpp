#include <iostream>
#include <climits>
using namespace std;

int ability[5];
int diff[3];

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> ability[i];
    }

    int answer = INT_MAX;

    for (int i = 0; i < 4; i++) {
        for(int j = i + 1; j < 5; j++){

            for(int k = 0; k < 4; k++){
                for(int l = k + 1; l< 5 ; l++){
                    if (k == i || k == j || l == i || l == j)
                        continue;

                    for(int m = 0; m < 5; m++){
                            if (m == i || m == j ||
                                m == k || m == l)
                                continue;

                            diff[0] = ability[i] + ability[j];
                            diff[1] = ability[k] + ability[l];
                            diff[2] = ability[m];
                            
                            if (diff[0] == diff[1] ||
                            diff[0] == diff[2] ||
                            diff[1] == diff[2])
                            continue;
                            

                            int ref = INT_MIN;
                            for(int q = 0; q<2; q++){
                                for(int w = q+1; w<3; w++){
                                int minimum = abs(diff[q] - diff[w]);
                                ref = max(minimum, ref);
                                }
                            }
                            answer = min(ref, answer);

                    }
                }
            }
        }
    }

    cout << (answer == INT_MAX ? -1 : answer);
    return 0;
}