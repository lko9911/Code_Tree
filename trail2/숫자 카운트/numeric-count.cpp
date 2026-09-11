#include <iostream>

using namespace std;

int n;

int num[10];
int count1[10];
int count2[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num[i] >> count1[i] >> count2[i];
    }

    int answer = 0;

    // 후보 숫자 abc 생성
    for (int a = 1; a < 10; a++) {
        for (int b = 1; b < 10; b++) {
            for (int c = 1; c < 10; c++) {

                // 세 숫자는 서로 달라야 함
                if (a == b || b == c || c == a)
                    continue;

                bool possible = true;

                // 모든 질문 확인
                for (int i = 0; i < n; i++) {

                    int x = num[i] / 100;
                    int y = (num[i] % 100) / 10;
                    int z = num[i] % 10;

                    int cnt1 = 0;
                    int cnt2 = 0;

                    // 1번 카운트
                    // 숫자와 위치 모두 같은 경우
                    if (a == x) cnt1++;
                    if (b == y) cnt1++;
                    if (c == z) cnt1++;

                    // 2번 카운트
                    // 숫자는 있지만 위치가 다른 경우
                    if (a == y || a == z) cnt2++;
                    if (b == x || b == z) cnt2++;
                    if (c == x || c == y) cnt2++;

                    // 문제에서 알려준 결과와 다르면
                    // 현재 abc는 정답 후보가 아님
                    if (cnt1 != count1[i] || cnt2 != count2[i]) {
                        possible = false;
                        break;
                    }
                }

                // 모든 질문을 통과했다면 정답 후보
                if (possible)
                    answer++;
            }
        }
    }

    cout << answer;

    return 0;
}