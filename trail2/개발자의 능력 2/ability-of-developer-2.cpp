#include <iostream>
#include <climits>
using namespace std;

int ability[6];
int diff[3];

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> ability[i];
    }

    int answer = INT_MAX;

    for (int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 6; j++){

            for(int k = 0; k < 5; k++){
                for(int l = k + 1; l< 6 ; l++){
                    if (k == i || k == j || l == i || l == j)
                        continue;

                    for(int m = 0; m < 5; m++){
                        for(int n = m+1; n < 6; n++){
                            if (m == i || m == j ||
                                m == k || m == l ||
                                n == i || n == j ||
                                n == k || n == l)
                                continue;

                            diff[0] = abs(ability[i] + ability[j]);
                            diff[1] = abs(ability[k] + ability[l]);
                            diff[2] = abs(ability[m] + ability[n]);
                            
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
    }

    cout << answer;
    return 0;
}